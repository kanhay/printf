/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft_fun.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:13:04 by khanhayf          #+#    #+#             */
/*   Updated: 2022/12/03 14:54:00 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	g_l += write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)");
		return ;
	}
	while (s[i])
		ft_putchar(s[i++]);
}

int	ft_count(int n)
{
	int	c;

	c = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		c++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

void	ft_itoa(int n)
{	
	int		l;
	char	*s;
	long	nb;

	l = ft_count(n);
	nb = n;
	s = (char *)malloc(sizeof(char) * (l + 1));
	if (s == NULL)
		return ;
	s[l] = '\0';
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		s[0] = '0';
	while (nb > 0 && l-- > 0)
	{
		s[l] = (nb % 10) + 48;
		nb /= 10;
	}
	ft_putstr(s);
	free (s);
}
