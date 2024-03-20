/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:52:39 by mbany             #+#    #+#             */
/*   Updated: 2024/03/20 11:49:50 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "get_next_line.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

void	ft_strdel(char **as)
{
	if (as != NULL && *as != NULL)
		ft_memdel((void**)as);
}

void	ft_memdel(void **ap)
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*dest;

	len = ft_strlen(s);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		s1_len;
	int		s2_len;
	char	*dest;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	d_len;
	size_t	i;
	char	*dest;

	s_len = ft_strlen(s);
	if (start > s_len)
		d_len = 0;
	else if (s_len - start > len)
		d_len = len;
	else
		d_len = s_len - start;
	dest = (char *)malloc((d_len + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (i < d_len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}