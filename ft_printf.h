/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:07:48 by khanhayf          #+#    #+#             */
/*   Updated: 2022/12/03 14:50:49 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	g_l;

int		ft_printf(const char *s, ...);
void	ft_putchar(char c);
int		ft_count(int n);
void	ft_itoa(int n);
void	ft_putstr(char *s);
void	ft_putnbr(unsigned int n);
void	ft_tohexdec(unsigned int n, char *s);
void	ft_ptohexdec(unsigned long n, char *s);
#endif 