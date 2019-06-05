/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 08:27:36 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/05 12:47:35 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	char			*s1;
	unsigned char	*s2;

	if (!(s1 = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	s2 = (unsigned char *)s1;
	while (size--)
		*s2++ = '\0';
	*s2 = '\0';
	return (s1);
}
