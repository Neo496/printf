/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:30:32 by atouba            #+#    #+#             */
/*   Updated: 2021/11/28 16:37:27 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *p)
{
	long long	res;

	res = n;
	if (res >= 0 && res <= 9)
	{
		ft_putchar(res + '0', p);
	}
	if (res < 0)
	{
		ft_putchar('-', p);
		res *= -1;
		if (res >= 0 && res <= 9)
		{
			ft_putchar(res + '0', p);
			return ;
		}
	}
	if (res >= 10)
	{
		ft_putnbr(res / 10, p);
		ft_putchar((res % 10) + '0', p);
	}
}

// int main()
// {
// 	int x = 0;
// 	ft_putnbr(11112, &x);
// 	printf("\n%d", x);
// }
// int	real_putnbr(int n);
// {
// 	int	i;
// 	i = 0;
// 	ft_putnbr(n);
// 	if (n == 0)
// 		return (1);
// 	if (n < 0)
// 	{
// 		i++;
// 		n *= -1;
// 	}
// 	while (n > 0)
// 	{
// 		n / 10;
// 		i++;
// 	}
// 	return (i);
// }