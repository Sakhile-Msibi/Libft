/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 13:10:37 by smsibi            #+#    #+#             */
/*   Updated: 2019/05/24 13:11:11 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	char			*c1;
	unsigned char	c2;

	c1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz" "0123456789";
	c2 = (unsigned char)c;
	while (*c1 != '\0' && *c1 != c2)
		c1++;
	if (*c1)
		return (1);
	return (0);
}
