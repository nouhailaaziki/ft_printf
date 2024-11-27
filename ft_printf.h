/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:54:28 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/27 17:59:24 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

// Mandatory part

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putptr(void *ptr);
int	ft_putnbr(int nbr);
int	ft_putuns(unsigned int i);
int	ft_puthex_low(unsigned int n);
int	ft_puthex_upp(unsigned int n);
int	ft_strlen(const char *s);

#endif
