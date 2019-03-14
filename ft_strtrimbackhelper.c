/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimbackhelper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:11:59 by mqian             #+#    #+#             */
/*   Updated: 2019/03/11 19:12:49 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strtrimbackhelper(char *s)
{
	int		i;
	char	*temp;
	int		len;

	temp = s;
	len = ft_strlen(s);
	i = 0;
	len--;
	while (temp[len] == ' ' || temp[len] == '\t' || temp[len] == '\n')
	{
		len--;
		i++;
	}
	return (i);
}

/*
** ft_trimbackhelper
** helper function that coutns whitespaces
** from back of function
** iterate to end, go back one, then start counting.
*/
