#include "ft_printf.h"

int	ft_pointer(unsigned int n, int fd)
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
		if (i == 0)
		{
			ft_putstr_fd("0x", 1);
			i += 2;
		}
		i++;
		ft_putchar_fd(hexa[n], fd);
	}
	return (i);
}
