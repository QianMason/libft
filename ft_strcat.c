/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:37:17 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 17:44:50 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int desti;
	int srci;

	desti = 0;
	srci = 0;
	while (s1[desti] != '\0')
		desti++;
	while (s2[srci] != '\0')
	{
		s1[desti] = s2[srci];
		srci++;
		desti++;
	}
	s1[desti] = '\0';
	return (s1);
}

/*
** concatenates s2 to s1;
** iterates to the end of the dest buffer as it stands
** then starts copying setting the value after the end of dest originally to the values in src, thus concatenating
** increment
** null terminate the end.
*/
