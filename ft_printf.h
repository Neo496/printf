/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atouba <atouba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 09:16:54 by atouba            #+#    #+#             */
/*   Updated: 2021/11/28 01:52:08 by atouba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *p);
void	ft_putstr(char *str, int *p);
void	ft_putnbr(int n, int *p);
void	ft_put_unsigned(unsigned int n, int *p);
void	lower_hexa(unsigned int n, int *p);
void	ft_putpointer(void *ptr, int *p);
void	upper_hexa(unsigned int n, int *p);

#endif