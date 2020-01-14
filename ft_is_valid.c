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

int			ft_check_flag(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] && !ft_isnumber(tab[i]))
	{
		if (ft_strcmp(tab[i], "-v"))
			return (-1);
		i++;
	}
	return (i);
}

static int	ft_check_entry(char **tab, int start)
{
	int	i;

	i = start;
	while (tab[i])
	{
		if (!ft_isnumber(tab[i++]))
			return (0);
	}
	return (1);
}

static int	ft_check_duplicate(char **tab, int start)
{
	int	i;
	int	j;

	i = start;
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

int			ft_is_valid(char **tab, int *flag)
{
	*flag = ft_check_flag(tab);
	if (*flag == -1)
	{
		return (0);
	}
	if (!ft_check_entry(tab, *flag) || !ft_check_duplicate(tab, *flag))
	{
		return (0);
	}
	return (1);
}
