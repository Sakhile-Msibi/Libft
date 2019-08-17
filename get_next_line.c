/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smsibi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 08:18:02 by smsibi            #+#    #+#             */
/*   Updated: 2019/08/17 08:44:49 by smsibi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_list	*find_fd(int fd, t_list *lst)
{
	while (lst)
	{
		if (((t_fd*)lst->content)->nfd == fd)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}

t_list			*create_fd_elem(int fd)
{
	t_fd		fd_e;

	fd_e.nfd = fd;
	fd_e.rest = ft_strnew(BUFF_SIZE);
	return (ft_lstnew(&fd_e, sizeof(t_fd)));
}

int				read_line(int fd, t_list *current, char **line)
{
	int			ret;
	char		*position;

	ret = 1;
	position = NULL;
	while (ret > 0 && !(position = ft_strchr(FD_ELEM->rest, '\n')))
	{
		*line = ft_strjoinfree(*line, FD_ELEM->rest, 1);
		ft_memset(FD_ELEM->rest, 0, BUFF_SIZE);
		ret = read(fd, FD_ELEM->rest, BUFF_SIZE);
	}
	if (ret <= 0)
	{
		if (*line[0])
		{
			free(FD_ELEM->rest);
			return (1);
		}
		return (ret);
	}
	*position = '\0';
	*line = ft_strjoinfree(*line, FD_ELEM->rest, 1);
	ft_strcpy(FD_ELEM->rest, position + 1);
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*head = NULL;
	t_list			*current;

	if (fd < 0 || line == NULL || BUFF_SIZE < 1 || (!(*line = ft_memalloc(1))))
		return (-1);
	if (!(current = find_fd(fd, head)))
		ft_lstadd(&head, (current = create_fd_elem(fd)));
	if (head == NULL || current == NULL || FD_ELEM->rest == NULL)
		return (-1);
	return (read_line(fd, current, line));
}
