/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:20:48 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 17:43:19 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	num = n;
	if (num > 9)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putnbr_fd(num % 10, fd);
	}
	if (num <= 9)
		ft_putchar_fd((num % 10) + 48, fd);
}

/*
** recursive solution to putnbr (same as putnbr except with fd this time);
** first case, checks if the number is negative, if it is, writes down a specific '-' char then reverses the value of n
** set num = n to handle integer overflow
** if num > 9, that means we dont have one number and need to recursively go down and divide by 10 via computer math until we get the first number of the int.
** then it goes up the stack and prints out the last digit on that call with the num <= 9 case and put char.
** example -234, if n < 0 puts down '-' char then reverses the number
** goes into recursive loop. num > 9 so ft_putnbr(234 / 10 = 23) -> ft_putnbr(2) -> prints number 2 then goes back to ft_putnbr(23 % 10) which prints out 3 then goes back up and prints out
** ft_putnbr (234 % 10) which then prints out four. in the order of print calls generates -234 on the standard output.
*/