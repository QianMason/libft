/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:27:33 by mqian             #+#    #+#             */
/*   Updated: 2019/03/11 19:27:47 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *,
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
