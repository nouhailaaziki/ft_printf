/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noaziki <noaziki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:05:57 by noaziki           #+#    #+#             */
/*   Updated: 2024/11/27 13:31:14 by noaziki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putptr(void *ptr)
{
	int			counter;
	unsigned long	address;

	counter = 0;
	if (!ptr)
		return (ft_putstr("0x0"));
	address = (unsigned long)ptr;
	counter = ft_putstr("0x");
	counter += ft_puthex_low(address);
	return (counter);
}
