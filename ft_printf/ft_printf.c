/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbany <mbany@student.42warsaw.pl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:08:27 by mbany             #+#    #+#             */
/*   Updated: 2024/04/05 13:23:59 by mbany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


ft_printf(const char *, ...)
{
	va_start(args, string);
	while (string[i] !='\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_signcheck(string[i], &args, &i);
			i++;
		}
		else
		{
			ft_print_char((char)string[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len;)
}