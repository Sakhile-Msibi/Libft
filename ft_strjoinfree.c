/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 09:14:15 by smsibi            #+#    #+#             */
/*   Updated: 2019/08/17 09:19:40 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_str(char *s1, char *s2, int del)
{
	if (del == 1)
		free(s1);
	else if (del == 2)
		free(s2);
	else
	{
		free(s1);
		free(s2);
	}
}

char		*ft_strjoinfree(char *s1, char *s2, int del)
{
	char	*fresh;
	int		i;
	int		len1;
	int		len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len = len1 + ft_strlen(s2);
	if (!(fresh = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (i < len1)
			fresh[i] = s1[i];
		if (i < (len - len1))
			fresh[i + len1] = s2[i];
		i++;
	}
	free_str(s1, s2, del);
	return (fresh);
}
