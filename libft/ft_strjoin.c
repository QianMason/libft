#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *new;
  char *temp;

  new = NULL;
  if (s1 && s2)
  {
    temp = ft_strnew(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
    if (!temp)
      return (NULL);
    new = temp;
    while (*s1)
    {
      *temp = *s1;
      s1++;
      temp++;
    }
    while (*s2)
    {
      *temp = *s2;
      s2++;
      temp++;
    }
  }
  return (new);
}

/*
** instead of two while loops, you could use strcpy for first loops
** and you can use strcat for the second since strcpy copies
** and strcat appends to whatever room is left (needs room in buffer)
*/
