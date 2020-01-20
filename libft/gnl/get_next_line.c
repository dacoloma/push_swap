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

static char		*ft_strndup(char *src, int len)
{
	char	*cpy;
	int		i;

	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

static char		*ft_strncat_gnl(char *s1, const char *s2, int len)
{
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = 0;
	while (j < len)
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}

static char		*ft_strnjoin(char *s1, char *s2, int len2)
{
	char	*concat;
	int		len1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	ft_strcpy(concat, s1);
	ft_strncat_gnl(concat, s2, len2);
	concat[len1 + len2] = '\0';
	return (concat);
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
		if (ret == -1)// || (ret > 0 && buf[ret - 1] == '\0'))
			return (GNL_ERROR);
		buf[ret] = '\0';
		if ((int)ft_strlen(buf) != ret)
		{
			// ft_printf("GNL ERROR\n");
			return (GNL_ERROR);
		}
		// tmp = (*tmp == '\0') ? ft_strndup(buf, ret) : ft_strjoin(elem->content, buf);
		// *tmp = (**tmp == '\0') ? ft_strdup(buf) : ft_strjoin(elem->content, buf);
		// i = 0;
		// ft_printf("BUFFER : ");
		// while (i < ret)
		// {
		// 	ft_putchar(buf[i++]);
		// }
		if (*tmp[0] == '\0')
			*tmp = ft_strndup(buf, ret);
			// *tmp = ft_strdup(buf);
		else
			*tmp = ft_strnjoin(elem->content, buf, ret);
			// ft_strjoin(elem->content, buf);
		ft_strdel(&elem->content);
		elem->content = *tmp;
		if (ft_has_new_line(buf, '\n') == VALID)
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
	tmp = elem->content;
	ret = ft_get_content(fd, elem, &tmp);
	if (ret == GNL_ERROR)
		return (GNL_ERROR);
	if ((ret == 0 && !elem->content) || *tmp == '\0')
	{
		ft_free_gnl(elem);
		return (GNL_EOF);
	}
	ft_get_line(tmp, line, elem);
	return (GNL_READ);
}
