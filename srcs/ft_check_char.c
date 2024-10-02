/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:56:09 by crea              #+#    #+#             */
/*   Updated: 2024/01/26 14:29:06 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*	ft_check_char:
**	Validates the format specifiers in the string 'str' used for printing.
**	The function scans through the string and checks each format specifier following a '%'.
**	It ensures that only valid specifiers ('c', 's', 'd', 'i', 'u', 'X', 'x', 'p', '%') are present.
**	If an invalid specifier is found or a '%' is the last character, the function returns 0.
**	Otherwise, it returns 1 indicating all specifiers are valid.
*/
int	ft_check_char(const char *str)
{
	while (*str)
	{
		if (*str == '%' && *(str + 1))
		{
			str++;
			if (*str != 'c' && *str != 's' && *str != 'd' && *str != 'i'
				&& *str != 'u' && *str != 'X' && *str != 'x' && *str != 'p'
				&& *str != '%')
				return (0);
		}
		else if (*str == '%' && !*(str + 1))
			return (0);
		str++;
	}
	return (1);
}

