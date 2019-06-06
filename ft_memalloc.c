/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:33:58 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/06 14:31:28 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*s;
	size_t	i;

	s = NULL;
	i = 0;
	if (!(s = (char *)malloc(size)))
		return (NULL);
	while (i < size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}
