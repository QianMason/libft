/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 18:14:47 by mqian             #+#    #+#             */
/*   Updated: 2019/03/08 15:04:01 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	searchlen;
	size_t	remainlen;

	remainlen = len;
	searchlen = ft_strlen(needle);
	if (searchlen < 1)
		return ((char *)haystack);
	while (*haystack && remainlen >= searchlen)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, searchlen) == 0)
			return ((char *)haystack);
		haystack++;
		remainlen--;
	}
	return (NULL);
}

/*
** idea here is that if the remaining length you can search at any time
** becomes shorter than the length of the needle itself
** you know you already can't find the needle in the remaining haystack
*/
