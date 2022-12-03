/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 12:10:15 by khanhayf          #+#    #+#             */
/*   Updated: 2022/12/03 15:17:46 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_arg(va_list argptr, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(argptr, int));
	else if (c == '%')
		ft_putchar('%');
	else if (c == 'd' || c == 'i')
		ft_itoa(va_arg(argptr, int));
	else if (c == 's')
		ft_putstr(va_arg(argptr, char *));
	else if (c == 'u')
		ft_putnbr(va_arg(argptr, unsigned int));
	else if (c == 'x')
		ft_tohexdec(va_arg(argptr, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		ft_tohexdec(va_arg(argptr, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		ft_putstr("0x");
		ft_ptohexdec(va_arg(argptr, unsigned long), "0123456789abcdef");
	}
	else
		ft_putchar(c);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	argptr;

	g_l = 0;
	va_start(argptr, s);
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == '\0')
				break ;
			check_arg(argptr, s[i]);
		}
		else
			ft_putchar(s[i]);
		i++;
	}
	va_end(argptr);
	return (g_l);
}
