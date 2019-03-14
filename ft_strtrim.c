/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:25:05 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:34:51 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		front;
	int		back;
	int		len;
	char	*new;

	if (!s)
		return (NULL);
	front = ft_strtrimfronthelper((char *)s);
	if (front < 0)
	{
		new = ft_strnew(0);
		return (new);
	}
	back = ft_strtrimbackhelper((char *)s);
	len = ft_strlen((char *)s);
	new = ft_strsub(s, front, (len - front - back));
	if (!new)
		return (NULL);
	return (new);
}

/*
** trim front and back white spaces
** front gets number of white spaces in the front (3 types according to the docs)
** fronttrimhelper will count number of white spaces and return it. if it counts only white spaces
** it returns a negative number which then makes new set to a new string that is just a terminating block since it will trim all of the white space
** if its greater than a negative, then backtrimhelper gets the number of whitespaces at the end
** does this by getting len of string, and iterating from the back while the values are white spaces.
** returns number of back end white spaces
** then sets new = strsub which is passed the param string, the front (start idx), and len of valid string = (len - front - back)
** checks for that allocated memory
** returns new
*/

