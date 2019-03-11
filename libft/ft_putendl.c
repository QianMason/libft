#include "libft.h"

void	ft_putendl(char const *s)
{
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
  ft_putchar('\n');
}
