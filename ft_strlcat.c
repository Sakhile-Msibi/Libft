/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 07:28:22 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/05 09:42:50 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *restrict d, const char *restrict s, size_t size)
{
	size_t len;
	size_t slen;

	len = 0;
	slen = ft_strlen(s);
	while (*d && size > 0)
	{
		d++;
		len++;
		size--;
	}
	while (*s && size > 1)
	{
		*d++ = *s++;
		size--;
	}
	if (size == 1 || *s == 0)
		*d = '\0';
	return (slen + len);
}
