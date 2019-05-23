/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:02:37 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/23 13:42:16 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t i;
	char *temp;
	char *s1;
	const char *s2;

	s1 = (char *)dest;
	s2 = (const char *)src;
	temp = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (i < len)
	{
		*(temp + i) = *(s2 + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(s1 + i) = *(temp + i);
		i++;
	}
	free(temp);
	return (dest);
}
