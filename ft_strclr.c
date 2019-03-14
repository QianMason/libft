/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 15:51:45 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 17:53:43 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t len;

	if (s)
	{
		len = ft_strlen(s);
		ft_bzero((void *)s, len);
	}
}

/*
** sets everything in a string to 0 to clear it
** checks if string is not null
** gets len of the string
** calls ft_bzero to set string values to 0
*/