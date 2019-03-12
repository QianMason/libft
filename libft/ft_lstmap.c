#include "libft.h"

t_list * ft_lstmap(t_list *lst, t_list *
(*f)(t_list *elem))
{
  while (lst && f)
  {
    t_list *new;
    new = ft_lstnew(((f)(lst))->content, lst->content_size);
  }
}
