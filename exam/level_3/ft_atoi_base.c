/*
Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);
a dodam coś żeby mieć commit
*/
int is_in_base(char c, int base)
{
	return((c >= '0' && c <= '0' + base - 1) || (c >= 'a' && c <= 'a' + base - 11) || (c >= 'A' && c <= 'A' + base - 11));
}

int	ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	while((str[i] == ' ' || (str[i] >=9 && str[i] <= 13)) && str[i] )
		i++;
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			result = result * str_base + str[i] - '0';
		if(str[i] >= 'a' && str[i] <= 'f')
			result = result * str_base + str[i] - 'a' +10;
		if(str[i] >= 'Z' && str[i] <= 'Z')
			result = result * str_base + str[i] - 'A' +10;
		i++;
	}
	return(sign * result);
}
#include <stdio.h>
int main()
{
	int base = 16;
	char *s = "ff";
	printf("%d\n", ft_atoi_base(s, base));
	return 0;

}









































// #include <unistd.h>
// #include <stdio.h>
// int is_in_base(char c, int base)
// {
// 	return ((c >= '0' && c <= '0' + base - 1) || (c >= 'a' && c <= 'a' + base - 11) || (c >= 'A' && c <= 'A' + base - 11));
// }
// int	ft_atoi_base(const char *str, int str_base)
// {
// 	int i = 0;
// 	int sign = 1;
// 	int nbr = 0;
// 	while((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13 )) && str[i])
// 		i++;
// 	if(str[i] == '-' && i == 0)
// 		sign = -1;
// 	if(str[i] == '-' || str[i] == '+')
// 		i++;
// 	while(is_in_base(str[i], str_base) && str[i])
// 	{
// 		if(str[i] >= '0' && str[i] <= '9')
// 			nbr = nbr * str_base + str[i] - '0';
// 		else if (str[i] >= 'A' && str[i] <= 'F')
// 			nbr = nbr *str_base + str[i] - 'A' + 10;
// 		else if (str[i] >= 'a' && str[i] <= 'f')
// 			nbr = nbr *str_base + str[i] - 'a' + 10;
// 		i++;
// 	}
// 	return nbr;
// }
// int main()
// {
// 	int base = 16;
// 	char *str = "ff";
// 	printf("%d\n", ft_atoi_base(str, base));
// 	return 0;
// }
