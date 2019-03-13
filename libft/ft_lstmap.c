/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:17:31 by mqian             #+#    #+#             */
/*   Updated: 2019/03/11 20:29:33 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *curr;
	t_list *track;
	t_list *head;

	track = NULL;
	head = NULL;
	while (lst && f)
	{
		if (!(curr = ft_lstnew(((f)(lst))->content, ((f)(lst))->content_size)))
			return (NULL);
		if (!track)
		{
			head = curr;
			track = curr;
			curr = curr->next;
		}
		else
		{
			track->next = curr;
			curr = curr->next;
			track = track->next;
		}
		lst = lst->next;
	}
	return (head);
}
/*
** Iterates a list lst and applies the function f to each link to
** create a “fresh” list (using malloc(3)) resulting from the
** successive applications of f. If the allocation fails, the function
** returns NULL
** if (!track) line is to handle for first time you create elem
*/
