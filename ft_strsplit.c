/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:05:38 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/31 11:07:06 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	ft_word_count(char const *s, char c)
{
	int nbrword;

	nbrword = 0;
	if (!s)
		return (0);
	if (*s != c && *s)
	{
		s++;
		nbrword++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s)
				nbrword++;
		}
		s++;
	}
	return (nbrword);
}

static int	ft_word_len(char const *s, char c)
{
	int j;

	j = 0;
	if (!s)
		return (0);
	while (*s != c && *s)
	{
		j++;
		s++;
	}
	return (j);
}

char		**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	char **fresh;

	i = 0;
	j = 0;
	if (!s || (!(fresh = (char **)malloc(sizeof(char) * (ft_word_count(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
				s++;
		if (*s != c && *s)
		{
			if (!(fresh[j] = (char *)malloc(sizeof(char) * (ft_word_len(s, c) + 1))))
				return (NULL);
			while (*s && *s != c)
				fresh[j][i++] = (char)*s++;
			fresh[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	fresh[j] = NULL;
	return (fresh);
}
