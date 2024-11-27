/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:44:27 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/27 17:59:01 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_low(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n >= 16)
	{
		counter += ft_puthex_low(n / 16);
		counter += ft_puthex_low(n % 16);
	}
	else if (n > 9)
		counter += ft_putchar(n + 87);
	else
		counter += ft_putchar(n + '0');
	return (counter);
}
