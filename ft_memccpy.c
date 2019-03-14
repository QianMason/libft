/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 16:55:21 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 17:25:04 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			len;
	unsigned char	*s;
	unsigned char	*d;

	d = dst;
	s = (unsigned char *)src;
	len = 0;
	while (len < n)
	{
		*d = *s;
		if (*s == (unsigned char)c)
		{
			d++;
			return ((void *)d);
		}
		d++;
		s++;
		len++;
	}
	return (NULL);
}

/*
** copies from source to dest buffer until it reaches a c char in src buffer
** while len is less than n (theoretical correct buffer size of dst) it copies, then checks if src char is the one passed
** if it is, it stops copying and moves the dest pointer over one and returns pointer in dst to where it stopped
** else, it increments everything and on to the next iteration of the loop
** returns NULL if it exits the loop without finding param passed in the src and copies everything
*/
