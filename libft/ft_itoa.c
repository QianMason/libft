/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:22:27 by mqian             #+#    #+#             */
/*   Updated: 2019/03/11 19:23:51 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_numdigits(unsigned int n)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char		*ft_itoa(int n)
{
	unsigned int	num;
	int				count;
	int				sign;
	char			*new;

	sign = 1;
	count = 0;
	if (n < 0)
	{
		count++;
		n = -n;
		sign = -1;
	}
	num = (unsigned int)n;
	count = count + ft_numdigits(num);
	if (!(new = ft_strnew(sizeof(char) * count)))
		return (NULL);
	while (--count >= 0)
	{
		new[count] = (char)((num % 10) + 48);
		num = num / 10;
	}
	if (sign < 0)
		new[0] = '-';
	return (new);
}
