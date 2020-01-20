/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_elem.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:05:59 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/14 17:06:11 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl.h"

static int	ft_get_content(char *content, int fd, t_gnl **list)
{
	if (content == NULL)
	{
		(*list)->content = (char *)malloc(sizeof(char));
		if ((*list)->content == NULL)
		{
			free(*list);
			return (INVALID);
		}
		(*list)->content[0] = '\0';
	}
	else
	{
		(*list)->content = (char *)malloc(sizeof(char) * (ft_strlen(content) + 1));
		if ((*list)->content == NULL)
		{
			free(*list);
			return (INVALID);
		}
		ft_strcpy((*list)->content, content);
	}
	(*list)->fd = fd;
	(*list)->next = NULL;
	return (VALID);
}

t_gnl	*ft_new_elem(char *content, int fd)
{
	t_gnl	*list;

	list = (t_gnl *)malloc(sizeof(t_gnl));
	if (list == NULL)
		return (NULL);
	if (ft_get_content(content, fd, &list) == INVALID)
		return (NULL);
	return (list);
}

void	ft_add_elem(t_gnl **alst, t_gnl *new)
{
	new->next = *alst;
	*alst = new;
}

t_gnl	*ft_get_elem(t_gnl **head, const int fd)
{
	t_gnl	*elem;

	elem = *head;
	while (elem && elem->fd != fd)
		elem = elem->next;
	if (elem == NULL)
	{
		elem = ft_new_elem(NULL, fd);
		if (elem == NULL || elem->content == NULL)
		{
			ft_strdel(&(elem->content));
			free(elem);
			return (NULL);
		}
		ft_add_elem(head, elem);
	}
	return (elem);
}
