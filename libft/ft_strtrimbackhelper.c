#include "libft.h"

int ft_strtrimbackhelper(char *s)
{
  int i;
  char *temp;
  int len;

  temp = s;
  len = ft_strlen(s);
  i = 0;
  len--;
  while (temp[len] == ' ' || temp[len] == '\t' || temp[len] == '\n')
  {
    len--;
    i++;
  }
  return (i);
}

/*
** ft_trimbackhelper
** helper function that coutns whitespaces
** from back of function
** iterate to end, go back one, then start counting.
*/
