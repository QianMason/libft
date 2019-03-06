#include <string.h>
#include <stddef.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
  char *dt;
  char *st;
  size_t max;
  size_t len;

  dt = dst;
  st = (char *)src;
  max = dstsize - ft_strlen(dst) - 1;
  len = 0;
  // want to iterate to the /0 of s1 and then start copying from there
  while (*dt != '\0')
    dt++;
  while (*st != '\0' && len < max) // will stop when it reached end of source or reaches max length of copyable string
  {
    *dt = *st;
    dt++;
    st++;
    len++
  }
  dt = '\0'; //nul terminate the end
  return (ft_strlen(dst) + len);
}
