/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:05:38 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/06 13:13:38 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static int	ft_wordc(char const *s, char c)
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

static int	ft_wordl(char const *s, char c)
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
	int		i;
	int		j;
	char	**f;

	i = 0;
	j = 0;
	if (!s || (!(f = (char **)malloc(sizeof(char) * (ft_wordc(s, c) + 1)))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!(f[j] = (char *)malloc(sizeof(char) * (ft_wordl(s, c) + 1))))
				return (NULL);
			while (*s && *s != c)
				f[j][i++] = (char)*s++;
			f[j][i] = '\0';
			j++;
			i = 0;
		}
	}
	f[j] = NULL;
	return (f);
}
