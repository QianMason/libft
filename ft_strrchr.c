/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:13:50 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:19:33 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*temp;
	size_t	i;

	i = 0;
	len = ft_strlen((char *)s);
	temp = NULL;
	if ((char)c == '\0')
		return ((char *)s + len);
	while (i < len)
	{
		if (s[i] == (char)c)
			temp = (char *)&s[i];
		i++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}

/*
** returns pointer to last occurrence of the char to search for in string
** get len of the string adn set i as counter to 0
** if the char we need to find is \0, just return the char * pointer + len to get that index of the \0
** else while i < len of string, if the s[i] == char, set temp to equal the memory address of the char (to get pointer, but i casted it??)
** increment pointer
** do i even need the temp == null check i dont think so lol
** returns temp and whatever value it last found, null if it found nothing
*/
