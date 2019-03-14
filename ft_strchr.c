/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:12:48 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 17:52:42 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && *s == (char)c)
		return ((char *)s);
	return (NULL);
}

/*
** checks for characters while not null
** returns if it finds the char else it incrememnts
** if the character it is looking for is \0, special case to handle it outside the loop
** returns NULL if it doesnt find what it is looking for
*/