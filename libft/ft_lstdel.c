#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *,
size_t))
{
  t_list *temp;

  temp = *alst;
  while (temp)
  {
    (del)((temp)->content, (temp)->content_size);
    temp = temp->next;
    free(*alst);
    *alst = temp;
  }
  free(*alst);
  *alst = NULL;
}
