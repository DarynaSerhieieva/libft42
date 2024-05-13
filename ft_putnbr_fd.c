#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	clone;

	clone = n;
	if (clone < 0)
	{
		ft_putchar_fd('-', fd);
		clone *= -1;
	}
	if (clone >= 2147483647)
	{
		ft_putchar_fd('2', fd);
		clone = 147483647;
	}
	if (clone > 9)
	{
		ft_putnbr_fd(clone / 10, fd);
		ft_putchar_fd(('0' + (clone % 10)), fd);
	}
	else
		ft_putchar_fd(clone + '0', fd);
}
