/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_mod.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 08:16:01 by smsibi            #+#    #+#             */
/*   Updated: 2019/08/05 08:35:45 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_mod(char *s1, char **s2)
{
	size_t	i;
	char	*fresh;
	char	*temp;
	size_t	len;

	temp = *s2;
	if (!s1 || !temp)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(temp);
	if (!(fresh = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (*s1 != '\0')
		fresh[i++] = *s1++;
	while (*temp != '\0')
		fresh[i++] = *temp++;
	fresh[i] = '\0';
	free(temp);
	return (fresh);
}
