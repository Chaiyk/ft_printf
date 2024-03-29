#include "ft_printf.h"

int	ft_hexanbrlow_fd(int n, int fd)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		i += ft_hexanbrlow_fd(n / 16, fd);
		n %= 16;
	}
	if (n < 16)
	{
		i++;
		ft_putchar_fd(hexa[n], fd);
	}
	return (i);
}

int	ft_hexanbrup_fd(int n, int fd)
{
	int		i;
	char	*hexa;

	i = 0;
	hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		i += ft_hexanbrup_fd(n / 16, fd);
		n %= 16;
	}
	if (n < 16)
	{
		i++;
		ft_putchar_fd(hexa[n], fd);
	}
	return (i);
}
