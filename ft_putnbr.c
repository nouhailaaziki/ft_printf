/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:28:49 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/27 17:55:54 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	counter;

	counter = 0;
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	else if (nbr < 0)
	{
		counter += ft_putchar('-');
		nbr = -nbr;
		counter += ft_putnbr(nbr);
	}
	else if (nbr > 9)
	{
		counter += ft_putnbr(nbr / 10);
		counter += ft_putnbr(nbr % 10);
	}
	else
		counter += ft_putchar(nbr + '0');
	return (counter);
}
