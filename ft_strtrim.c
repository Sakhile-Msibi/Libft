/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:30:08 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/31 07:38:20 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char    *ft_strdup(const char *src)
{
    char    *dup;
    int     i;

    i = 0;
    while (src[i] != '\0')
        i++;
    if (!(dup = (char*)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    dup[i] = '\0';
    while (i >= 0)
    {
        dup[i] = src[i];
        i--;
    }
    return (dup);
}

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *fresh;

    if (!s || !(fresh = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    i = 0;
    while (i < len && s[start] != '\0')
        fresh[i++] = s[start++];
    fresh[i] = '\0';
    return (fresh);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;

	if (!s) 
		return (NULL);
	j = ft_strlen(s) - 1;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (ft_strdup(s + i));
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j > 0)
		j--;
	return (ft_strsub(s, i, j - i + 1));
}
