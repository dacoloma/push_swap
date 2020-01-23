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

int			ft_check_flag(char **tab, int *flag)
{
	int	i;

	i = 0;
	while (tab[i] && !ft_isnumber(tab[i]))
	{
		if (ft_strcmp(tab[i], "-v"))
			return (INVALID);
		i++;
	}
	if (i > 0 && tab[i] == NULL)
		return (INVALID);
	if (i == 1)
		*flag = 1;
	return (VALID);
}

static int	ft_check_number(char **tab, int start)
{
	int	i;

	i = start;
	while (tab[i])
	{
		if (!ft_isnumber(tab[i++]))
			return (INVALID);
	}
	return (VALID);
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
				return (INVALID);
		}
		i++;
	}
	return (VALID);
}

int			ft_check_entry(char **tab, int *flag)
{
	if (ft_check_flag(tab, flag) == INVALID)
	{
		return (INVALID);
	}
	if (!ft_check_number(tab, *flag) || !ft_check_duplicate(tab, *flag))
	{
		return (INVALID);
	}
	return (VALID);
}

int			ft_is_valid(int ac, char **av, t_piles **pile, int prog)
{
	char **args;

	if (!(*pile = (t_piles *)malloc(sizeof(t_piles))))
		return (EXIT_FAILURE);
	ft_init_var(*pile);
	if (prog == CHECKER)
		(*pile)->checker = 1;
	if (ft_get_args(ac, av, &args) == INVALID
		|| ft_check_entry(args, &(*pile)->flag) == INVALID)
		return (INVALID);
	if (ft_init(*pile, args) == INVALID)
	{
		ft_free_tab(args);
		return (INVALID);
	}
	ft_free_tab(args);
	return (VALID);
}
