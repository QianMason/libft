#include <string.h>
#include <stddef.h>

char *ft_strncat(char *s1, const char *s2, size_t n)
{
  char *dest;
  char *src;
  size_t len;

  dest = s1;
  src = (char *)s2;
  len = 0;
  // want to iterate to the /0 of s1 and then start copying from there
  while (*dest != '\0')
  {
    dest++;
  }
  while (*src != '\0' && len < n)
  {
    *dest = *src;
    dest++;
    src++;
  }
  dest = '\0';
  return (s1);
}
