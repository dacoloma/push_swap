/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 10:54:32 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/02 10:54:35 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_partition(t_piles *pile)
{
	if (pile->len - pile->len_b <= 3 && ft_check_split(pile))
		return (1);
	ft_get_med(pile);
	if (pile->a[pile->len_b] < pile->med)
	{
		ft_sort_left(pile);
	}
	else
	{
		ft_putstr("ra\n");
		ft_ra(pile);
	}

	// MED;
	ft_partition(pile);
	return (0);
}

void		ft_long_stack(t_piles *pile)
{
	ft_partition(pile);
	ft_short_stack(pile);
	ft_get_best_rot_B(pile, pile->max_index_b);
	while (pile->len_b)
	{
		ft_putstr("pa\n");
		ft_pa(pile);
	}
}
