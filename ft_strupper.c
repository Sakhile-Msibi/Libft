/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:03:12 by smsibi            #+#    #+#             */
/*   Updated: 2019/08/14 08:57:46 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strupper(char *s)
{
	if (!s)
		return ;
	while (*s != '\0')
	{
		*s = ft_toupper(*s);
		s++;
	}
}
