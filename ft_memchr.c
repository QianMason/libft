/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 17:49:53 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 17:26:31 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			len;
	unsigned char	*temp;

	temp = (unsigned char *)s;
	len = 0;
	while (len < n)
	{
		if (*temp == (unsigned char)c)
			return (temp);
		temp++;
		len++;
	}
	return (NULL);
}

/*
** finds first ocurrence of passed char c in the string.
** while len is within n bytes, it will check each char value in the string.
** if located, it returns a pointer to that char, else it will exit the loop after finding none and return NULL
*/

