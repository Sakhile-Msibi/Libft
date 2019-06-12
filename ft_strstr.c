/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:01:36 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/12 07:32:21 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t n;

	n = ft_strlen(s2);
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1)
	{
		if (!ft_memcmp(s1, s2, n))
			return ((char *)s1);
		s1++;
	}
	return (0);
}
