/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:35:19 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/27 17:56:09 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns(unsigned int i)
{
	int	counter;

	counter = 0;
	if (i > 9)
	{
		counter += ft_putuns(i / 10);
		counter += ft_putuns(i % 10);
	}
	else
		counter += ft_putchar(i + '0');
	return (counter);
}
