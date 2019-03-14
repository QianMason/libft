/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 12:40:13 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:10:07 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*dest;
	char		*src;
	size_t		len;

	dest = s1;
	src = (char *)s2;
	len = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src && len < n)
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}
	*dest = '\0';
	return (s1);
}

/*
** concatenates s2 to s1 up to n bytes.
** iterate to end of dest(s1)
** pick up copy from there and while len < n
** do copies and increment everything
** null terminate the end
** return s1(dest) string
*/
