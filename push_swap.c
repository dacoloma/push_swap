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
	t_piles	*pile;

	if (ac == 1)
		return (EXIT_SUCCESS);
	if (ft_is_valid(ac, av, &pile, PUSH_SWAP) == INVALID)
	{
		ft_free(pile);
		ft_putstr_err("Error\n");
		return (EXIT_FAILURE);
	}
	ft_sort_stack(pile);
	ft_free(pile);
	return (EXIT_SUCCESS);
}
