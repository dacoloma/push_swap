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

#include "libft.h"

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
	free(tmp);
}

// static char		*ft_strndup(char *src, int len)
// {
// 	char	*cpy;
// 	int		i;

// 	cpy = (char *)malloc(sizeof(char) * (len + 1));
// 	if (cpy == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		cpy[i] = src[i];
// 		i++;
// 	}
// 	cpy[i] = '\0';
// 	return (cpy);
// }

int				get_next_line(const int fd, char **line)
{
	static t_gnl	*head = NULL;
	t_gnl			*elem;
	char			*tmp;
	int				ret;
	char			buf[BUFF_SIZE + 1];

	if (!ft_is_valid(fd, line))
		return (GNL_ERROR);
	elem = ft_get_elem(&head, fd);
	tmp = elem->content;
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1 || (ret > 0 && buf[ret - 1] == '\0'))
			return (GNL_ERROR);
		buf[ret] = '\0';
		// tmp = (*tmp == '\0') ? ft_strndup(buf, ret) : ft_strjoin(elem->content, buf);
		tmp = (*tmp == '\0') ? ft_strdup(buf) : ft_strjoin(elem->content, buf);
		free(elem->content);
		elem->content = tmp;
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if ((ret == 0 && !elem->content) || *tmp == '\0')
	{
		ft_strdel(&elem->content);
		free(elem);
		return (GNL_EOF);
	}
	ft_get_line(tmp, line, elem);
	return (GNL_READ);
}
