/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:00:52 by mbany             #+#    #+#             */
/*   Updated: 2024/03/29 16:09:24 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//=∂/\/\[](_)§ /\/\@|V †|-|@¯|¯ /-/!570®1<|-\£1_`/ ¢@/\/\ε vv!7}{ ???
#include "get_next_line.h"

static char	*_fill_line_buffer(int fd, char *left_c, char *buffer);
static char	*_set_line(char *line);
static char	*ft_strchr(char *s, int c);

char	*get_next_line(int fd)
{
	static char	*left_c;
	char		*line;
	char		*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
/*
     * fd < 0 : this means the file descriptor is invalid
     * BUFFER_SIZE <= 0 : we'll read BUFFER_SIZE characters at a time,
     * we can't read 0 or less character
     * read(fd, 0, 0) < 0 : this check lets us see if the file exists and
     * that it has some content to read from, or event that the file is 
     * openable to read, maybe the file descriptor is more than 0, but it
     * was open in 'modify only', that means we can't read it.
     */
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(left_c);
		free(buffer);
		left_c = NULL;
		buffer = NULL;
		return (NULL);
	}
	if (!buffer)
		return (NULL);
	line = _fill_line_buffer(fd, left_c, buffer);
	/* We have to free the buffer variable here since we'll not be using
     * it later in the function, freeing it prevents memory leaks.
     */
	free(buffer);
	buffer = NULL;
	if (!line)
		return (NULL);
	left_c = _set_line(line);
	return (line);
}

static char	*_set_line(char *line_buffer)
{
	char	*left_c;
	ssize_t	i;

	i = 0;
	/* This loop let's us find the end of the line
     * either when we encounter a \n or a \0
     */
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	/* here we check if the current or next character is a \0
     * if this is the case, this means that the line is empty so
     * we return NULL, this is what the subject asks us, send NULL
     * if there is no next line
     */
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	/* here we take a substring from the end of the line to the end
     * of the whole line_buffer, that's what's left from our line
     */
	left_c = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*left_c == 0)
	{
		free(left_c);
		left_c = NULL;
	}
	/* don't forget to set the last character to \0 to NUL-terminate
     * the line
	*/
	line_buffer[i + 1] = 0;
	return (left_c);
}

static char	*_fill_line_buffer(int fd, char *left_c, char *buffer)
{
	/* ssize_t type works the same way as siyze_t type, but it can be
	ssize_t	b_read;
	char	*tmp;
         * a negative number, something that size_t can't do.
         * Since most of the system function we'll be using return -1 to
         * signify errors, it could be useful to be able to store 
         * negative numbers
         */
	b_read = 1;
	while (b_read > 0)
	{
		b_read = read(fd, buffer, BUFFER_SIZE);
		/* if b_read is -1, it means there was an error reading
		 * the file descriptor, so we free left_c and return NULL.
		 */
		if (b_read == -1)
		{
			free(left_c);
			return (NULL);
		}
		/* if b_read is 0, this surely means we read the whole
		 * file so there-s no need to stay in the loop
		 */
		else if (b_read == 0)
		/* if we didn't read anything, we can break out of the
		 * loop
		 */
			break ;
		/* don't forget to set the last character of the buffer
		 * to 0 to NUL-terminate the string
		 */
		buffer[b_read] = 0;
		/* there we check if the left_c static char * is empty
		 * because if it's empty, we can't use ft_strjoin on it
		 */
		if (!left_c)
			left_c = ft_strdup("");
		tmp = left_c;
		/* once we set left_c to be empty, if it was NUL
		 * or just that something was left in it from the
		 * last time we called get_next_line
		 * we can join the buffer we just read to left_c
		 */
		left_c = ft_strjoin(tmp, buffer);
		free(tmp);
		tmp = NULL;
		/* we search in the buffer we just read if we read
		 * a \n or not
		 * if yes, we can break out of the loop
		 * if not, we go in the loop once again to read more 
		 * from the file.
		 */
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	/* at the end of this function, we return the left_c string
	 * it will contain everything we read and ensure there's is 
	 * either a \0 or a \n within it.
	 */
	return (left_c);
}

static char	*ft_strchr(char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}
