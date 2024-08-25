/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:02:43 by crea              #+#    #+#             */
/*   Updated: 2024/01/26 13:52:39 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	baselen(size_t nb);

/*	ft_putnbr_hex:
		Converts the given number 'nb' to a hexadecimal string using the specified base ('x' or 'X').
		Revert and writes the resulting hexadecimal string to the standard output.
		Returns the number of digits in the hexadecimal representation.
*/
int	ft_putnbr_hex(size_t nb, char c)
{
	char	*base;
	char	*str;
	int		i;
	int		count;

	count = baselen(nb);
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	str = malloc(baselen(nb) + 1);
	if (!str)
		return (NULL);
	i = count;
	str[i] = '\0';
	while (nb > 0)
	{
		str[i--] = base[nb % 16];
		nb = nb / 16;
	}
	ft_putstr(str);
	return (count);
}

/*	baselen:
		Calculates the number of digits required to represent the number 'nb' in base 16.
		Returns the length of the hexadecimal string.
*/
static int	baselen(size_t nb)
{
	int		digits;

	if (nb == 0)
		return (1);
	digits = 0;
	while (nb > 0)
	{
		nb = nb / 16;
		digits++;
	}
	return (digits);
}
