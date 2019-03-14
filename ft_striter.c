/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 16:19:02 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:00:09 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t len;
	size_t i;

	if (!s || !f)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		(f)(&s[i++]);
	}
}

/*
** checks null for both parameters
** gets len of string
** while i < len, apply function to each char. since it takes a char star, you need to give it the memory address by using a reference (&)
*/
