/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:37:28 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/11 17:37:30 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isnumber(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i++]))
			return (0);
	}
	return (1);
}

static int	ft_check_entry(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (!ft_isnumber(tab[i++]))
			return (0);
	}
	return (1);
}

static int	ft_check_duplicate(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (!ft_strcmp(tab[i], tab[j++]))
				return (0);
		}
		i++;
	}
	return (1);
}

int			ft_is_valid(char **tab)
{
	if (!ft_check_entry(tab) || !ft_check_duplicate(tab))
		return (0);
	return (1);
}
