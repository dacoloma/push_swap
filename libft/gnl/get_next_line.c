/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/30 10:14:30 by dcoloma           #+#    #+#             */
/*   Updated: 2019/03/22 12:06:26 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

static int		ft_is_valid(const int fd, char **line)
{
	char	*buf[1];

	return (!((fd < 0 || line == NULL || (read(fd, buf, 0) < 0)
					|| BUFF_SIZE < 1)));
}

static void		ft_get_line(char *tmp, char **line, t_gnl *elem)
{
	int	i;

	i = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	*line = ft_strsub(tmp, 0, i);
	elem->content = (tmp[i] == '\n') ? ft_strdup(tmp + i + 1) : NULL;
	ft_strdel(&tmp);
}

static int		ft_has_new_line(char *buf, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (buf[i] == '\n')
			return (VALID);
		i++;
	}
	return (INVALID);
}

static int		ft_get_content(const int fd, t_gnl *elem, char **tmp)
{
	int				ret;
	char			buf[BUFF_SIZE + 1];

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (GNL_ERROR);
		buf[ret] = '\0';
		if ((int)ft_strlen(buf) != ret)
			return (GNL_ERROR);
		if (*tmp == NULL)
			*tmp = ft_strndup(buf, ret);
		else
			*tmp = ft_strnjoin(elem->content, buf, ret);
		ft_strdel(&elem->content);
		elem->content = *tmp;
		if (ft_has_new_line(buf, ret) == VALID)
			break ;
	}
	return (ret);
}

int				get_next_line(const int fd, char **line)
{
	static t_gnl	*head = NULL;
	t_gnl			*elem;
	char			*tmp;
	int				ret;

	if (!ft_is_valid(fd, line))
		return (GNL_ERROR);
	elem = ft_get_elem(&head, fd);
	if (elem == NULL)
		return (GNL_ERROR);
	tmp = NULL;
	if (elem->content != NULL)
		tmp = elem->content;
	ret = ft_get_content(fd, elem, &tmp);
	if (ret == GNL_ERROR)
		return (GNL_ERROR);
	if ((ret == 0 && !elem->content) || *tmp == '\0')
	{
		ft_del_elem(&(elem));
		return (GNL_EOF);
	}
	ft_get_line(tmp, line, elem);
	return (GNL_READ);
}
