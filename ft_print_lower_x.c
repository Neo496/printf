/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:36:58 by atouba            #+#    #+#             */
/*   Updated: 2021/11/28 00:53:48 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	lower_hexa(unsigned int n, int *p)
{
	char			*base;
	unsigned int	div;

	if (n == 0)
	{
		ft_putchar('0', p);
	}
	if (n < 0)
	{
		ft_putchar('-', p);
		n *= -1;
	}
	if (n > 0)
	{
		base = "0123456789abcdef";
		div = 16;
		if (n / div > 0)
			lower_hexa(n / div, p);
		ft_putchar(base[n % div], p);
	}
}
