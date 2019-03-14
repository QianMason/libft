/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 18:14:47 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:16:27 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hstk, const char *needle, size_t len)
{
	size_t	searchlen;
	size_t	remainlen;

	remainlen = len;
	searchlen = ft_strlen(needle);
	if (searchlen < 1)
		return ((char *)hstk);
	while (*hstk && remainlen >= searchlen)
	{
		if (*hstk == *needle && ft_memcmp(hstk, needle, searchlen) == 0)
			return ((char *)hstk);
		hstk++;
		remainlen--;
	}
	return (NULL);
}

/*
** idea here is that if the remaining length you can search at any time
** becomes shorter than the length of the needle itself
** you know you already can't find the needle in the remaining haystack
** probably didnt need remainlen, but it was a better name
** searchlen = length of the needle, didnt want to use ftstrlen everytime to save computation
** if the searchlen of the needle is < 1, just return the haystack since you cant find a 0 length needle
** so while the haystack char is vali and remainlen >= searchlen
** if the two chars are equal and the memcmp of the two of them returns 0 you've found the needle, so return the pointer in haystack
** else increment haystack and decrement remainlen length you can search;
** return NULL if it exits the loop, indicating the needle was not found
*/
