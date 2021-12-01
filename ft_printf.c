/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:31:56 by atouba            #+#    #+#             */
/*   Updated: 2021/11/28 16:45:15 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	func(char c, va_list vl, int *p)
{
	if (c == 'c')
		ft_putchar(va_arg(vl, int), p);
	else if (c == '%')
		ft_putchar('%', p);
	else if (c == 's')
		ft_putstr(va_arg(vl, char *), p);
	else if (c == 'p')
		ft_putpointer(va_arg(vl, void *), p);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(vl, int), p);
	else if (c == 'u')
		ft_put_unsigned(va_arg(vl, unsigned int), p);
	else if (c == 'x')
		lower_hexa(va_arg(vl, int), p);
	else if (c == 'X')
		upper_hexa(va_arg(vl, int), p);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		p;
	va_list	vl;

	p = 0;
	va_start(vl, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			func(str[++i], vl, &p);
		else
			ft_putchar(str[i], &p);
		i++;
	}
	va_end(vl);
	return (p);
}
