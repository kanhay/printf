
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
void	ft_putstr(char *s);
void	ft_putpnbr(unsigned int n);
void	ft_putnbr(int n);
void	ft_tohexdec(unsigned int n, char *s);
void	ft_ptohexdec(unsigned long n, char *s);
#endif 