/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:01:36 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/05 08:01:04 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*ptr1 < *ptr2)
			return (-1);
		else if (*ptr1 > *ptr2)
			return (1);
		ptr1++;
		ptr2++;
		i++;
	}
	return (0);
}

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t n;

	n = strlen(s2);
	while (*s1)
	{
		if (!ft_memcmp(s1, s2, n))
			return ((char *)s1);
		s1++;
	}
	return (0);
}
