/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 17:38:14 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:08:17 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	size_t	i;
	char	*new;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	new = ft_strnew(len);
	if (!new)
		return (NULL);
	while (i < len)
	{
		new[i] = (f)(s[i]);
		i++;
	}
	return (new);
}

/*
** null check of params
** get len of string
** allocate new string;
** allocation check for new string
** while i < len, copy applied function on source string char to new string and increment
** return the new string
*/
