/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 10:04:20 by atouba            #+#    #+#             */
/*   Updated: 2021/11/28 16:40:54 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pointer_hexa(unsigned long long n, int *p)
{
	char	*base;
	int		div;

	if (n == 0)
		ft_putchar('0', p);
	if (n > 0)
	{
		base = "0123456789abcdef";
		div = 16;
		if (n / div > 0)
			pointer_hexa(n / div, p);
		ft_putchar(base[n % div], p);
	}
}

void	ft_putpointer(void *ptr, int *p)
{
	unsigned long long	n;

	n = (unsigned long long)ptr;
	ft_putstr("0x", p);
	if (p == 0)
		ft_putchar('0', p);
	else
		pointer_hexa(n, p);
}
