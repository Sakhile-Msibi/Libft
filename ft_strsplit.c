/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 10:34:05 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/12 08:42:17 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_wordc(const char *str, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			word++;
		i++;
	}
	if (str[0] != '\0')
		word++;
	return (word);
}

static	char	*ft_wordnbr(const char *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k++;
		*i += 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i += 1;
	return (s);
}

char			**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		w;
	char	**f;

	i = 0;
	j = 0;
	w = ft_wordc(s, c);
	if (!s || (!(f = (char **)malloc(sizeof(f) * (ft_wordc(s, c) + 2)))))
		return (NULL);
	while (s[i] == c && s[i])
		i++;
	while (j < w && s[i])
	{
		f[j] = ft_wordnbr(s, c, &i);
		j++;
	}
	f[j] = NULL;
	return (f);
}
