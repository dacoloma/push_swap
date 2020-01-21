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

int			main(int ac, char **av)
{
	char	**args;
	t_piles	*pile;
	int		flag;

	if (ft_is_valid(ac, av, &args, &flag) == INVALID
			|| ft_init(&pile, args, flag) == INVALID)
	{
		ft_putstr_err("Error\n");
		return (EXIT_FAILURE);
	}
	ft_get_min_index(pile);
	ft_get_max_index(pile);
	ft_get_med(pile);
	ft_sort_stack(pile);
	ft_free(pile, args);
	return (EXIT_SUCCESS);
}
