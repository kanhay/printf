/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fun.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:48:59 by khanhayf          #+#    #+#             */
/*   Updated: 2022/12/03 14:54:19 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(unsigned int n)
{
	if (n < 10)
		ft_putchar(n + 48);
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

void	ft_tohexdec(unsigned int n, char *s)
{
	if (n >= 16)
	{	
		ft_tohexdec(n / 16, s);
		ft_tohexdec(n % 16, s);
	}
	else
		ft_putchar(s[n]);
}

void	ft_ptohexdec(unsigned long n, char *s)
{
	if (n >= 16)
	{	
		ft_ptohexdec(n / 16, s);
		ft_ptohexdec(n % 16, s);
	}
	else
		ft_putchar(s[n]);
}
