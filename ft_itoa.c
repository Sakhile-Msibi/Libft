/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:50:30 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/27 13:04:01 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static void		lengths(int n, size_t *a, int *b)
{
	*a = 1;
	if (n >= 0)
	{
		*a = 0;
		n = -n;
	}
	*b = 1;
	while (n / *b < -9)
	{
		*b *= 10;
		*a += 1;
	}
}

char			*ft_itoa(int n)
{
	size_t	a;
	int		b;
	size_t	i;
	char	*s;

	lengths(n, &a, &b);
	s = (char *)malloc(sizeof(*s) * (a + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		s[i] = '-';
		i++;
	}
	if (n > 0)
		n = -n;
	while (b >= 1)
	{
		s[i++] = -(n / b % 10) + 48;
		b /= 10;
	}
	s[i] = '\0';
	return (s);
}
