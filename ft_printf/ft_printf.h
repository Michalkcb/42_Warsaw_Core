/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:15:38 by mbany             #+#    #+#             */
/*   Updated: 2024/04/12 13:32:14 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int			ft_put_c(int c);
size_t		ft_strlen(const char *s);
int			ft_put_s(char *str);
int			ft_put_n(int n);
int			ft_put_u(unsigned int n);
int			ft_put_x(unsigned int n, int s);
int			ft_len_ptr(size_t nb);
void		ft_put_ptr(size_t nb);
int			ft_put_p(size_t ptr);
int			ft_printf(const char *string, ...);

#endif
