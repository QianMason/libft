#include "libft.h"

static int ft_numdigits(unsigned int n)
{
  int count;

  count = 0;
  if (n == 0)
    return (1);
  while (n > 0)
  {
    n = n / 10;
    count++;
  }
  return (count);
}

char *ft_itoa(int n)
{
  unsigned int num;
  int count;
  int sign;
  char *new;

  sign = 1;
  count = 0;
  if (n < 0)
  {
    count++;
    n = -n;
    sign = -1;
  }
  num = (unsigned int)n;
  count = count + ft_numdigits(num);
  if (!(new = ft_strnew(sizeof(char) * count)))
    return (NULL);
  while (--count >= 0)
  {
    new[count] = (char)((num % 10) + 48);
    num = num / 10;
  }
  if (sign < 0)
    new[0] = '-';
  return (new);
}
