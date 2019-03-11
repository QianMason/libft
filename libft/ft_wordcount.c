#include "libft.h"

int ft_wordcount(char *s, char c)
{
  int count;
  int charbool;

  count = 0;
  charbool = 1;
  while (*s)
  {
    if (*s == c)
      charbool = 1;
    else if (charbool == 1 && *s != c)
    {
      charbool = 0;
      count++;
    }
    s++;
  }
  return (count);
}

/*
** accepts a string and a char to search for
** and returns the number of words in the string
*/
