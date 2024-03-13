/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:40:37 by mbany             #+#    #+#             */
/*   Updated: 2024/03/13 10:40:31 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Turn in files -
// Parameters s: The string to be split.
// c: The delimiter character.
// Return value The array of new strings resulting from the split.
// NULL if the allocation fails.
// External functs. malloc, free
// Description Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer.

char **ft_split(char const *s, char c)
{
	char	**result;
	
}

int main()
{
	char s[] = 'qwe/rtyu/iopa/sdf/ghz/xcv/b';
	char c = '/';
	char r = ft_split(s, c);
	printf("%s\n", r)
}


#include "libft.h"

// Funkcja zlicza liczbę słów w ciągu 's' oddzielonych znakiem 'c'
static int	numwords(char const *s, char c)
{
	int	cur; // Aktualny indeks w ciągu 's'
	int	word_num; // Liczba słów

	cur = 0; // Inicjalizuje indeks jako 0
	word_num = 0; // Inicjalizuje liczbę słów jako 0
	while (s[cur] != 0) // Pętla przechodzi przez cały ciąg
	{
		// Jeśli aktualny znak nie jest separatorem 'c' i następny znak jest separatorem lub końcem ciągu, zwiększa liczbę słów
		if (s[cur] != c && (s[cur + 1] == c || s[cur + 1] == 0))
			word_num++;
		cur++; // Inkrementuje indeks
	}
	return (word_num); // Zwraca liczbę słów
}

// Funkcja dzieli ciąg 's' na słowa i zapisuje je do tablicy 'result'
static int	split_words(char **result, char const *s, char c, int word)
{
	int		start_cur; // Indeks początkowy słowa
	int		end_cur; // Indeks końcowy słowa

	end_cur = 0; // Inicjalizuje indeks końcowy jako 0
	start_cur = 0; // Inicjalizuje indeks początkowy jako 0
	while (s[end_cur]) // Pętla przechodzi przez cały ciąg
	{
		// Jeśli znak jest separatorem lub końcem ciągu, ustawia indeks początkowy na następny znak
		if (s[end_cur] == c || s[end_cur] == 0)
			start_cur = end_cur + 1;
		// Jeśli znak nie jest separatorem i następny znak jest separatorem lub końcem ciągu
		if (s[end_cur] != c && (s[end_cur + 1] == c || s[end_cur + 1] == 0))
		{
			// Alokuj pamięć dla słowa w tablicy wynikowej
			result[word] = malloc(sizeof(char) * (end_cur - start_cur + 2));
			if (!result[word]) // Sprawdza, czy alokacja się powiodła
			{
				// Jeśli nie, zwalnia pamięć zaalokowaną dla wcześniej utworzonych słów
				while (word++)
					free(result[word]);
				return (0); // Zwraca 0 (błąd alokacji)
			}
			// Kopiuje słowo z ciągu 's' do tablicy wynikowej
			ft_strlcpy(result[word], (s + start_cur), end_cur - start_cur + 2);
			word++; // Inkrementuje liczbę słów
		}
		end_cur++; // Inkrementuje indeks końcowy
	}
	result[word] = 0; // Ustawia znak końca tablicy wynikowej
	return (1); // Zwraca 1 (sukces)
}

// Funkcja dzieli ciąg 's' na słowa oddzielone separatorem 'c' i zwraca tablicę wskaźników do nowych ciągów znaków
char	**ft_split(char const *s, char c)
{
	char	**result; // Deklaruje tablicę wskaźników do nowych ciągów znaków

	if (!s) // Sprawdza, czy ciąg 's' istnieje
		return (NULL); // Jeśli nie, zwraca NULL
	result = malloc(sizeof(char *) * (numwords(s, c) + 1)); // Alokuje pamięć dla tablicy wynikowej
	if (!result) // Sprawdza, czy alokacja się powiodła
		return (NULL); // Jeśli nie, zwraca NULL
	if (!split_words(result, s, c, 0)) // Wywołuje funkcję do dzielenia ciągu na słowa
		return (NULL); // Jeśli nie powiodło się, zwraca NULL
	return (result); // Zwraca tablicę wynikową
}
