/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 12:41:00 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:29:44 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *ht;
	char *nt;

	ht = (char *)haystack;
	nt = (char *)needle;
	if (ft_strlen(needle) < 1)
		return ((char *)haystack);
	while (*ht)
	{
		if (*ht == *nt)
		{
			if (ft_strstrhelper(ht, nt))
			{
				return (ht);
			}
		}
		ht++;
	}
	return (NULL);
}

/*
** searches for the needle string in the haystack string
** if len of needle is less than 1, just return haystack
** iterate through haystack,
** if the values are equal, then check with helper function
** helper is basically strcmp, probably could've used that instead oh well.
** returns the haystack pointer if it passes
** else increment haystack and run loop again
** return NULL if nothing is found
*/
