/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:19:27 by mqian             #+#    #+#             */
/*   Updated: 2019/03/11 20:16:58 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void
*, size_t))
{
	(del)((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
