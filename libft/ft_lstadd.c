#include "libft.h"

void ft_lstadd(t_list **alst, t_list *new)
{
  if(new && alst && *alst)
    new->next = (*alst);
  *alst = new;
}
/*
** Adds the element new at the beginning of the list.
** THIS FUNCTION CONFUSES ME SINCE THE POINTER TO
** THE HEAD IS NOT BEING UPDATED? SHOULD WE?
*/
