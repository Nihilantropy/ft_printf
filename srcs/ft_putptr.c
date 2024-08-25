/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:56:27 by crea              #+#    #+#             */
/*   Updated: 2024/01/26 13:35:44 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static size_t	digits_nb(unsigned long long n);
static void		print_ptr(uintptr_t addr);

/*	ft_putptr:
		Writes the memory address 'addr' to the standard output in hexadecimal format, prefixed by "0x".
		If 'addr' is NULL, it writes "(nil)" instead.
		Returns the total number of characters written, including the "0x" prefix.
*/
int	ft_putptr(void *addr)
{
	if (!addr)
	{
		ft_putstr("(nil)");
		return (3);
	}
	ft_putstr("0x");
	print_ptr((uintptr_t)addr);
	return (digits_nb((uintptr_t)addr) + 2);
}

/*	digits_nb:
		Calculates the number of hexadecimal digits needed to represent the number 'n'.
		Returns the number of digits.
*/
static size_t	digits_nb(unsigned long long n)
{
	size_t	digits;

	digits = 0;
	while (n != 0)
	{
		digits++;
		n /= 16;
	}
	return (digits);
}

/*	print_ptr:
		Recursively writes the hexadecimal representation of the memory address 'addr' to the standard output.
		The function uses a static string "0123456789abcdef" to convert the number to hexadecimal format.
		The static variable 'digits' retains its value across function calls, allowing the conversion
		to be performed in a recursive manner without reinitializing the string each time.
*/
static void	print_ptr(uintptr_t addr)
{
	static char	*digits;

	digits = "0123456789abcdef";
	if (addr >= 16)
		print_ptr(addr / 16);
	write(1, &digits[addr % 16], 1);
}
