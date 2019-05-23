/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:37:59 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/23 11:53:04 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,size_t n)
{
	size_t i;
	char *s1;
	char *s2;
	const char *s3;

	s1 = (char *)dst;
	s3 = (const char *)src;
	i = 0;
	s2 = 0;
	while (i < n && s2 == 0)
	{
		s1[i] = s3[i];
		if (s1[i] == (char)c)
			s2 = s1 + i + 1;
		i++;
	}
	return (s2);
}
