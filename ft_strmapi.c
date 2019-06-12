/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:32:46 by smsibi            #+#    #+#             */
/*   Updated: 2019/06/12 08:11:40 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*fresh;

	if (!s || (!(fresh = (char *)malloc(sizeof(char) * ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		fresh[i] = f(i, (char)s[i]);
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
