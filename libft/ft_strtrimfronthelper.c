#include "libft.h"

int ft_strtrimfronthelper(char *s)
{
  int i;

  i = 0;
  while (*s == ' ' || *s == '\n' || *s == '\t')
  {
    i++;
    s++;
  }
  if (*s == '\0')
    return (-1);
  return (i);
}

/*
** ft_trimfronthelper
** helper function that counts white spaces
** whitespaces = \n, \t, and ' ' according to docs
** returns a negative if it only finds spaces
*/
