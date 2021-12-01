/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_X.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:37:34 by atouba            #+#    #+#             */
/*   Updated: 2021/11/28 00:52:54 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	upper_hexa(unsigned int n, int *p)
{
	char			*base;
	unsigned int	div;

	if (n == 0)
		ft_putchar('0', p);
	if (n < 0)
	{
		ft_putchar('-', p);
		n *= -1;
	}
	if (n > 0)
	{
		base = "0123456789ABCDEF";
		div = 16;
		if (n / div > 0)
			upper_hexa(n / div, p);
		ft_putchar(base[n % div], p);
	}
}
