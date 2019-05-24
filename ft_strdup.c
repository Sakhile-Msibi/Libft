/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:00:14 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/24 14:24:54 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(dup = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	dup[i] = '\0';
	while (i >= 0)
	{
		dup[i] = src[i];
		i--;
	}
	return (dup);
}
