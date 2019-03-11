#include "libft.h"

static int ft_nextindex(char *s, char c, int idx)
{
  while (s[idx] && s[idx] == c)
    idx++;
  return (idx);
}

static int ft_splitgetlen(char *s, char c, int idx)
{
  int len;

  len = 0;
  while (s[idx])
  {
    if (s[idx] != c)
      len++;
    idx++;
  }
  return (len);
}

char ** ft_strsplit(char const *s, char c)
{
  char **new;
  int index;
  int wordcount;
  int i;
  int j;

  if (!s)
    return (NULL);
  wordcount = ft_wordcount((char *)s, c);
  i = 0;
  index = 0;
  if (!(new = (char **)malloc(sizeof(s) * (wordcount + 1))))
    return (NULL);
  while (i < wordcount)
  {
    j = 0;
    index = ft_nextindex((char *)s, c, index);
    if (!(new[i] = ft_strnew(sizeof(char) * ft_splitgetlen((char *)s, c, index))))
      return (NULL);
    while (s[index] != c)
      new[i][j++] = s[index++];
    i++;
  }
  new[i] = 0;
  return(new);
}


/*
** Allocates (with malloc(3)) and returns an array of “fresh”
** strings (all ending with ’\0’, including the array itself) obtained
** by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL. Example
** : ft_strsplit("*hello*fellow***students*", ’*’) returns the array ["hello", "fellow", "students"].
*/
