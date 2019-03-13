/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:15:56 by mqian             #+#    #+#             */
/*   Updated: 2019/03/11 19:16:14 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new && alst && *alst)
		new->next = (*alst);
	*alst = new;
}
/*
** Adds the element new at the beginning of the list.
** THIS FUNCTION CONFUSES ME SINCE THE POINTER TO
** THE HEAD IS NOT BEING UPDATED? SHOULD WE?
*/
