/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:58:51 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/11 07:23:35 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*fresh;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s1);
	if (!s1 || !s2)
		return (NULL);
	if (!(fresh = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (*s1 != '\0')
		fresh[i++] = *s1++;
	while (*s2 != '\0')
		fresh[i++] = *s2++;
	fresh[i] = '\0';
	return (fresh);
}
