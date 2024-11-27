/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:44:44 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/27 17:59:08 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upp(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n >= 16)
	{
		counter += ft_puthex_upp(n / 16);
		counter += ft_puthex_upp(n % 16);
	}
	else if (n > 9)
		counter += ft_putchar(n + 55);
	else
		counter += ft_putchar(n + '0');
	return (counter);
}
