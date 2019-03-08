void *ft_memalloc(size_t size)
{
  void *alloc;
  int i;

  i = 0;
  alloc = (void *)malloc(sizeof(char) * size);
  if (!alloc)
  {
    return (NULL);
  }
  while (i < size)
  {
    alloc[i] = 0;
    i++;
  }
  return (alloc);
}
