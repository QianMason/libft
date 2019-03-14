/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:54:47 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:07:03 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		max;
	size_t		len;
	size_t		dstlen;

	dstlen = ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	max = dstsize - ft_strlen(dst) - 1;
	len = 0;
	while (*dst != '\0')
		dst++;
	while (src[len] && len < max)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (dstlen + ft_strlen(src));
}

/*
** guarantees nul termination and the correct dstsize
** destination len = strlen (dst)
** if the dstsize is less than the size of the dst, which it shouldnt be in theory, just return the length of string it tried to create which would be the source + dstsize
** the max = max number bytes to do operation which will be the size of the dstsize - length of the dst - 1
** iterate dst to the end to \0
** pick up wherey you left off and copy src to the remaining space int he buffer. could've tracked len size initially and just done len < dstsize, but my way works too
** null terminate the end of the string.
** since all went well, return the size dst + size of src since that is all the function is supposed to do
*/