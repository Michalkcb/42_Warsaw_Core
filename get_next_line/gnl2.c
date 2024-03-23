#include "get_next_line.h"  // Dołączenie pliku nagłówkowego get_next_line.h, który zawiera deklaracje funkcji i stałe.

// Funkcja obliczająca długość ciągu znaków, uwzględniając znak nowej linii.
int ft_strlen(char *s)
{
  int i = 0;  // Inicjalizacja licznika.

  if (!s)  // Sprawdzenie, czy wskaźnik na ciąg znaków jest pusty.
    return (0);  // Jeśli wskaźnik jest pusty, zwróć 0.
  while (s[i] != '\0' && s[i] != '\n') // Pętla while iterująca po ciągu znaków do momentu znalezienia znaku nowej linii lub końca ciągu.
    i++;  // Inkrementacja licznika.
  if (s[i] == '\n') // Jeśli znaleziono znak nowej linii, zwiększ długość o 1.
    i++;
  return (i);  // Zwróć długość ciągu znaków.
}

// Funkcja łącząca dwa ciągi znaków w jeden.
char  *ft_strjoin(char *s1, char *s2)
{
  int   len = ft_strlen(s1) + ft_strlen(s2); // Obliczenie długości nowego ciągu.
  int   i = 0;  // Inicjalizacja licznika dla pierwszego ciągu znaków.
  int   j = 0;  // Inicjalizacja licznika dla drugiego ciągu znaków.
  char  *new_str;  // Deklaracja wskaźnika na nowy ciąg znaków.

  new_str = (char *)malloc(sizeof(char) * (len + 1));  // Alokacja pamięci dla nowego ciągu znaków.
  if (!new_str)  // Sprawdzenie, czy alokacja pamięci zakończyła się sukcesem.
    return (free(s1), NULL);  // Zwolnienie pamięci zaalokowanej na pierwszy ciąg znaków i zwrócenie NULL.
  while (s1 && s1[i]) // Pętla kopiująca znaki z pierwszego ciągu do nowego.
  {
    new_str[i] = s1[i];
    i++;  // Inkrementacja licznika.
  }
  while (s2 && s2[j]) // Pętla kopiująca znaki z drugiego ciągu do nowego, zatrzymująca się w przypadku znaku nowej linii.
  {
    new_str[i] = s2[j];
    if (new_str[i] == '\n')
      break ;
    i++;
    j++;  // Inkrementacja licznika.
  }
  new_str[len] = '\0'; // Dodanie znaku końca ciągu.
  free(s1);  // Zwolnienie pamięci zaalokowanej na pierwszy ciąg znaków.
  return (new_str);  // Zwróć nowy ciąg znaków.
}

// Funkcja aktualizująca bufor, usuwając odczytane znaki.
int update_buffer(char *buf)
{
  int flag = 0;  // Inicjalizacja flagi.
  int i = 0;  // Inicjalizacja licznika dla bufora.
  int j = 0;  // Inicjalizacja licznika dla bufora po aktualizacji.

  while (buf[i]) // Pętla while iterująca po buforze.
  {
    if (flag)  // Jeśli flaga jest ustawiona, przenieś znaki do początku bufora.
      buf[j++] = buf[i];
    if (buf[i] == '\n')  // Sprawdź, czy znaleziono znak nowej linii.
      flag = 1;  // Ustaw flagę na 1.
    buf[i++] = '\0';  // Zastąp znaki w buforze znakiem null.
  }
  return (flag);  // Zwróć flagę, informującą o znalezieniu znaku nowej linii.
}

// Główna funkcja get_next_line do odczytu kolejnych linii z pliku.
char  *get_next_line(int fd)
{
  static char buffer[MAX_FD][BUFFER_SIZE + 1];  // Bufor statyczny przechowujący odczytane dane.
  int         bytes;  // Liczba odczytanych bajtów.
  char        *line;  // Wskaźnik na aktualną linię.

  if (fd < 0 || fd > MAX_FD || BUFFER_SIZE <= 0)  // Sprawdzenie poprawności parametrów.
    return (NULL);  // Zwrócenie NULL w przypadku błędu.
  line = NULL;  // Inicjalizacja wskaźnika linii.
  bytes = 0;  // Inicjalizacja liczby odczytanych bajtów.
  while (buffer[fd][0] || (bytes = read(fd, buffer[fd], BUFFER_SIZE)) > 0)
  {
    line = ft_strjoin(line, buffer[fd]);  // Łączenie linii z odczytanymi danymi z bufora.
    if (!line)  // Sprawdzenie, czy alokacja pamięci na linię zakończyła się sukcesem.
      return (NULL);  // Zwrot NULL w przypadku błędu alokacji.
    if (update_buffer(buffer[fd])) // Aktualizacja bufora, usuwając odczytane znaki.
      break ;  // Przerwanie pętli, jeśli znaleziono znak nowej linii.
  }
  if (line && bytes < 0)  // Sprawdzenie, czy linia istnieje i czy odczyt nastąpił błędem.
  {
    free(line);  // Zwolnienie pamięci zaalokowanej na linię.
    line = NULL;  // Ustawienie wskaźnika linii na NULL.
  }
  return (line);  // Zwrócenie wskaźnika na linię.
}



int main()
{
	int fd;
	char *line;

	fd = open("file1.txt", O_RDONLY); // Otwarcie pliku do odczytu
	if (fd == -1)
	{
		perror("open"); // Obsługa błędu otwarcia pliku
		return 1;
	}

	while ((line = get_next_line(fd)) != NULL) // Pętla odczytująca linie z pliku
	{
		printf("%s\n", line); // Wyświetlenie odczytanej linii
		free(line); // Zwolnienie pamięci po każdej odczytanej linii
	}

	close(fd); // Zamknięcie pliku
	return 0;
}
