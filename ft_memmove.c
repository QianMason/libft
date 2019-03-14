/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 12:44:11 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 17:37:18 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int				i;
	unsigned char	*dt;
	unsigned char	*st;

	dt = (unsigned char *)dst;
	st = (unsigned char *)src;
	i = len;
	if (st >= dt)
		ft_memcpy(dst, src, len);
	else
	{
		while (i - 1 >= 0)
		{
			dt[i - 1] = st[i - 1];
			i--;
		}
	}
	return (dst);
}

/*
** this is an interesting one, it first compares the memory addresses of the two pointers since the blocks might overlap
** if the source is greater than the destination, we can simply do a copy
** however, if the destination pointer is greater, when you do a regular copy and they are overlapping, the blocks you are copyig from will get overwritten, before you can reach it to do a proper cpy
** in that case, you need to do it backwards. i - 1 is done since if you do i, you will get an array out of bounds.
** decrement and do copies until you do it the proper number of times.
*/