/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:02:40 by mbany             #+#    #+#             */
/*   Updated: 2024/03/15 11:59:15 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_atoi(char *str);
int		ft_toupper(char c);
int		ft_tolower(char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strrchr(char const *str, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *d, const char *s, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strdup(const char *s);
char	*ft_strchr(char const *str, int c);
char	**ft_split(char const *s, char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int		ft_memcmp(void const *s1, void const *s2, size_t n);
void	*ft_memchr(void const *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_itoa(int n);
int		ft_isprint(int c);
void	ft_bzero(void *s, size_t n);
int		ft_isascii(int c);
int		ft_isalpha(int c);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
#endif
