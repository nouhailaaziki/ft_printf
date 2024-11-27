/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:05:57 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/27 18:04:18 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_putadd(unsigned long address)
{
	int	counter;

	counter = 0;
	if (address >= 16)
	{
		counter += ft_putadd(address / 16);
		counter += ft_putadd(address % 16);
	}
	else if (address > 9)
		counter += ft_putchar(address + 87);
	else
		counter += ft_putchar(address + '0');
	return (counter);
}

int	ft_putptr(void *ptr)
{
	int				counter;
	unsigned long	address;

	counter = 0;
	if (!ptr)
		return (ft_putstr("0x0"));
	address = (unsigned long)ptr;
	counter = ft_putstr("0x");
	counter += ft_putadd(address);
	return (counter);
}
