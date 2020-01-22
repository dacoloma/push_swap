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

	if (ac == 1)
		return (EXIT_SUCCESS);
	if (!(pile = (t_piles *)malloc(sizeof(t_piles))))
		return (EXIT_FAILURE);
	ft_init_var(pile);
	args = NULL;
	if (ft_is_valid(ac, av, &args, pile) == INVALID
			|| ft_init(pile, args) == INVALID)
	{
		ft_free(pile, args);
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
