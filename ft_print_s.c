/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:12:50 by atouba            #+#    #+#             */
/*   Updated: 2021/11/28 00:51:56 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	is_allowed_to_be_printed(char *str)
// {
// 	int	count;
// 	int	i;

// 	i = 0;
// 	count = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == '&')
// 			count++;
// 		i++;
// 	}
// }
void	ft_putstr(char *str, int *p)
{
	int	i;

	i = 0;
	if (str == 0)
	{
		ft_putstr("(null)", p);
		return ;
	}
	while (str[i])
	{	
		ft_putchar(str[i++], p);
	}
}
