/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:59:06 by crea              #+#    #+#             */
/*   Updated: 2024/01/26 12:56:39 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*	ft_putstr:
**	Writes the string 'str' to the standard output.
**	If 'str' is NULL, it writes "(null)" instead.
**	The function iterates over each character in 'str', 
**	calling ft_putchar to write each character, and 
**	accumulates the total number of characters written.
*/
int	ft_putstr(const char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (str == NULL)
	{
		count += ft_putstr("(null)");
		return (count);
	}
	while (str[i])
		count += ft_putchar(str[i++]);
	return (count);
}
