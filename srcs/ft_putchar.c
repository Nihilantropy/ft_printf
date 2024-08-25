/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:56:45 by crea              #+#    #+#             */
/*   Updated: 2024/01/26 15:46:14 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*	ft_putchar:
		Writes the character 'c' to the standard output.
		Returns the number of characters written, which is always 1.
*/
int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}
