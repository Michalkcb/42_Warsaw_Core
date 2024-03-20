/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:02:40 by mbany             #+#    #+#             */
/*   Updated: 2024/03/19 15:25:10 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
# endif
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char    *get_next_line(int fd);
char	*ft_strchr(char const *str, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
#endif
