/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:33:58 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/27 13:46:29 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char *s;

	s = NULL;
	if (size)
	{
		if (!(s = (char *)malloc(size)))
			return (NULL);
		while (size)
		{
			s[size] = 0;
			size--;
		}
	}
	return ((void *)s);
}
