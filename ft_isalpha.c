/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 11:20:52 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/24 11:48:13 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	char			*c1;
	unsigned char	c2;

	c1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
	c2 = (unsigned char)c;
	while (*c1 != '\0' && *c1 != c2)
		c1++;
	if (*c1)
		return (1);
	return (0);
}
