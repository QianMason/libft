/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 17:50:52 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 17:27:36 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*sone;
	unsigned char	*stwo;

	sone = (unsigned char *)s1;
	stwo = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*sone != *stwo)
		{
			return (*sone - *stwo);
		}
		i++;
		sone++;
		stwo++;
	}
	return (0);
}

/*
** like strcmp, but for blocks of memory
** two char * temp pointers on the two strings
** while i < n bytes, it will compare both blocks the two pointers are pointing at
** if they are different, return the difference between the two
** if it reaches the end and they are not different, simply returns 0
*/