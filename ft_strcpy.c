/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 12:39:17 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 17:55:45 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int iter;

	iter = 0;
	while (src[iter] != '\0')
	{
		dst[iter] = src[iter];
		iter++;
	}
	dst[iter] = '\0';
	return (dst);
}

/*
** copies string from src to dest buffer
** iterate thru src and use same index to copy values in.
** cap end of destination buffer with null terminator
*/
