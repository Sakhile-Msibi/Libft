/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:46:47 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/23 11:02:41 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *s1;
	const char *s2;

	s1 = (char *)dst;
	s2 = (const char *)src;
	while (n)
	{
		*s1++ = *s2++;
		n--;
	}
	return (dst);
}
