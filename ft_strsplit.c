/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqian <mqian@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:13:05 by mqian             #+#    #+#             */
/*   Updated: 2019/03/12 18:27:11 by mqian            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nextindex(char *s, char c, int idx)
{
	while (s[idx] && s[idx] == c)
		idx++;
	return (idx);
}

static	int	ft_getlen(char *s, char c, int idx)
{
	int	len;

	len = 0;
	while (s[idx])
	{
		if (s[idx] != c)
			len++;
		idx++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**new;
	int		idx;
	int		wordcount;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	wordcount = ft_wordcount((char *)s, c);
	i = 0;
	idx = 0;
	if (!(new = (char **)malloc(sizeof(s) * (wordcount + 1))))
		return (NULL);
	while (i < wordcount)
	{
		j = 0;
		idx = ft_nextindex((char *)s, c, idx);
		if (!(new[i] = ft_strnew(sizeof(char) * ft_getlen((char *)s, c, idx))))
			return (NULL);
		while (s[idx] != c)
			new[i][j++] = s[idx++];
		i++;
	}
	new[i] = 0;
	return (new);
}
/*
** Allocates (with malloc(3)) and returns an array of “fresh”
** strings (all ending with ’\0’, including the array itself) obtained
** by spliting s using the character c as a delimiter.
** If the allocation fails the function returns NULL. Example
** : ft_strsplit("*hello*fellow***students*", ’*’) returns the
** array ["hello", "fellow", "students"].
** THIS ONE WAS FUCKING COMPLICATED MAN
** has 5 values that keep track of shit
** first null check of parameters
** then gets the wordcount of the parameter in order to get the proper size of the **array to allocate
** wordcount works by using a boolean
** in the while loop, if the char is equal to the one we set as delim, it sets charbool to 1, which means that it has hit a delim
** and knows to check all following characters to see if they are valid chars / words
** if delim boolean is 1 and the char is not a delim, then it sets the boolean to zero and increments the word counter and will continue to
** increment the pointer until it reaches another delimiter.
** charbool starts out at one in case there is no delimiter in the front.
** now go back to main func, set i and idx to zero. i for **array counter while loop and idx for index of the string
** set j = 0; j is for the **array[i][j] access to do copies
** idx = ft_nextindex.
** nextindex works by skipping all white space until the next valid char and increments the index as it goes and returns it
** back to main func, allocate memory for array of new char via ft_strnew and getlen function which takes the index of the start of the valid
** word in the param string and gets the length. (getnextindex always passes it the start index of the next valid word in the main string)
** do allocation check
** then do copy of the new string from the old one where idx left off and starting at j = 0 in the new string
** increment i to next block in **array
** repeat loop
** at the end, end the **array with 0 per the docs and return it
*/

