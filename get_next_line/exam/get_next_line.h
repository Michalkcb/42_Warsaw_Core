/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:02:40 by mbany             #+#    #+#             */
/*   Updated: 2024/03/28 15:12:32 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif
//get_next_line_utils.c
int		ft_strlen(char *str);
char	*ft_strdup(char *str);

//get_next_line.c
char	*get_next_line(int fd);

#endif
