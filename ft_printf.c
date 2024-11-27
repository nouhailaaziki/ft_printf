/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:07:01 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/27 17:38:40 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_format(va_list args, char f)
{
	int	counter;

	counter = 0;
	if (f == 'c')
		counter = ft_putchar(va_arg(args, int));
	else if (f == 's')
		counter = ft_putstr(va_arg(args, char *));
	else if (f == 'd' || f == 'i')
		counter = ft_putnbr(va_arg(args, int));
	else if (f == 'u')
		counter = ft_putuns(va_arg(args, unsigned int));
	else if (f == 'x')
		counter = ft_puthex_low(va_arg(args, unsigned long));
	else if (f == 'X')
		counter = ft_puthex_upp(va_arg(args, unsigned long));
	else if (f == 'p')
		counter = ft_putptr(va_arg(args, void *));
	else
		counter = ft_putchar(f);
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;
	int		i;

	va_start(args, format);
	counter = 0;
	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			counter += ft_format(args, format[++i]);
		else
			counter += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (counter);
}
