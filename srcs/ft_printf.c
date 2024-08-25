/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:59:23 by crea              #+#    #+#             */
/*   Updated: 2024/02/27 20:23:51 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*	ft_printf:
		Implements a formatted output conversion similar to the standard printf function.
		- 'str' is the format string containing the text to be written to stdout, 
		which can include format specifiers that will be replaced by the values
		specified in the subsequent arguments.
		- Uses a variable argument list (va_list) to handle an arbitrary number 
		of arguments following the format string.
		- Returns the total number of characters written, or 0 if an error occurs 
		(e.g., if the format string is invalid).
*/
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	if (!ft_check_char(str))
		return (0);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_put(*str, args);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
