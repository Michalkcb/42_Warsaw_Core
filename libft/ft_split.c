/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:40:37 by mbany             #+#    #+#             */
/*   Updated: 2024/03/14 10:06:12 by mbany            ###   ########.fr       */
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

#include "libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	if (n == 0)
		return (i);
	while (--n && *s)
		*d++ = *s++;
	*d = '\0';
	return (i);
}

static int	count_words(char const *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while ((s[i] != 0))
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			word_count++;
		i++;
	}
	return (word_count);
}

static int	split_words(char **result, char const *s, char c, int word)
{
	int	start_i;
	int	end_i;

	end_i = 0;
	start_i = 0;
	while (s[end_i])
	{
		if (s[end_i] == c || s[end_i] == 0)
			start_i = end_i + 1;
		if (s[end_i] != c && (s[end_i + 1] == c || s[end_i] == 0))
		{
			result[word] = malloc(sizeof(char) * (end_i - start_i + 2));
			if (!result[word])
			{
				while (word++)
					free(result[word]);
				return (0);
			}
			ft_strlcpy(result[word], (s + start_i), end_i - start_i + 2);
			word++;
		}
		end_i++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c, 0))
	{
		free(result);
		return (NULL);
	}
	return (result);
}

// int main()
// {
// 	char s[] = "qwe/rtyu/iopa/sdf/ghz/xcv/b";
// 	char c = '/';
// 	char **r = ft_split(s, c);
// 	int i = 0;
// 	while (r[i])
// 	{
// 		printf("%s\n", r[i]);
// 		i++;
// 	}
// }
