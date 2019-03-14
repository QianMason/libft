/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:26:22 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:03:00 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	char	*temp;

	new = NULL;
	if (s1 && s2)
	{
		temp = ft_strnew(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
		if (!temp)
			return (NULL);
		new = temp;
		while (*s1)
		{
			*temp = *s1;
			s1++;
			temp++;
		}
		while (*s2)
		{
			*temp = *s2;
			s2++;
			temp++;
		}
	}
	return (new);
}

/*
** instead of two while loops, you could use strcpy for first loops
** and you can use strcat for the second since strcpy copies
** and strcat appends to whatever room is left (needs room in buffer)
** joins two strings into a new string
** first checks two params for null
** allocate new string mem with ft_strnew and the two string lengths added.
** if alloc fails, return null.
** set new = temp to hold it at the beginning
** temp now copies the first string with a while loop.
** temp then copies the second string into the new one from where it left off after s1, essentially joining the two strings.
** returns new
*/
