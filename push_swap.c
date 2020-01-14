/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:48:27 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/06 16:48:29 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_get_arg(int ac, char **av, char ***args)
{
	int	ret;

	ret = 0;
	if (ac < 2)
		return (-1);
	if (ac == 2)
		*args = ft_strsplit(av[1], ' ');
	else if (ac == 3)
	{
		if (!ft_strcmp(av[1], "-v"))
			ret++;
		else
		{
			return (-1);
		}
		*args = ft_strsplit(av[2], ' ');
	}
	else
		*args = av + 1;
	return (ret);
}

int			main(int ac, char **av)
{
	char	**args;
	t_piles	*pile;
	int		ret;
	int		flag;

	ret = ft_get_arg(ac, av, &args);
	if (ret == -1 || ft_is_valid(args, &flag) == 0 || !ft_init(&pile, args, 0))
	{
		ft_putstr_err("Error\n");
		exit(-1);
	}
	ft_get_min_index(pile);
	ft_get_max_index(pile);
	ft_get_med(pile);
	ft_sort_stack(pile);
	ft_free(pile, ac, args);
	return (0);
}
