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

t_gnl	*ft_new_elem(char *content, int fd)
{
	t_gnl	*list;

	list = (t_gnl *)malloc(sizeof(t_gnl));
	if (list == NULL)
		return (NULL);
	if (content == NULL)
	{
		list->content = (char *)malloc(sizeof(char));
		if (list->content == NULL)
			return (NULL);
		list->content[0] = '\0';
	}
	else
	{
		list->content = (char *)malloc(sizeof(char) * (ft_strlen(content) + 1));
		if (list->content == NULL)
			return (NULL);
		ft_strcpy(list->content, content);
	}
	list->fd = fd;
	list->next = NULL;
	return (list);
}

void	ft_add_elem(t_gnl **alst, t_gnl *new)
{
	new->next = *alst;
	*alst = new;
}
