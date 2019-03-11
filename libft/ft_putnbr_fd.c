#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	unsigned int num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	num = n;
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	if (num <= 9)
		ft_putchar_fd((num % 10) + 48, fd);
}
