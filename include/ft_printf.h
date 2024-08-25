/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crea <crea@student.42roma.it>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:55:13 by crea              #+#    #+#             */
/*   Updated: 2024/01/26 15:46:19 by crea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

size_t	ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_putstr(const char *str);
int		ft_putnbr(int n);
int		ft_putuns(unsigned int n);
int		ft_putnbr_hex(size_t n, char c);
int		ft_putptr(void *addr);
int		ft_put(char c, va_list args);
int		ft_check_char(const char *s);
int		ft_printf(const char *s, ...);

#endif