/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:02:37 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/12 06:55:34 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*s1;
	const char	*s2;

	s1 = (char *)dst;
	s2 = (const char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (s2 < s1)
		while (++i <= len)
			s1[len - i] = s2[len - i];
	else
		while (len-- > 0)
			*(s1++) = *(s2++);
	return (dst);
}
