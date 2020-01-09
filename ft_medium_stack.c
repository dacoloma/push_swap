/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_medium_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:51:41 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/09 14:51:49 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_left_right_sort(t_piles *pile)
{
	if (!ft_check_sort(pile))
	{
		if (pile->a[pile->len_b] < pile->med)
		{
			ft_sort_left(pile);
		}
		else
		{
			ft_putstr("ra\n");
			ft_ra(pile);
		}
	}
}

void		ft_medium_stack(t_piles *pile)
{
	// MED;
	if (pile->min_index == 0 && ft_check_sort(pile))
		return ;
	if (ft_check_split(pile))
	{
		ft_sort_stack_a(pile);
	}
	if (pile->len - pile->len_b <= 3)
	{
		if (!pile->len_b || (pile->len_b
			&& pile->a[pile->min_index] > pile->b[pile->max_index_b]))
			ft_short_stack(pile);
	}
	if  (ft_check_sort(pile))
	{
		if (!pile->len_b
			|| (pile->len_b && pile->b[pile->max_index_b] < pile->a[pile->min_index]))
			ft_get_best_rot_A(pile, pile->min_index);
		else
			ft_get_best_rot_A(pile, pile->med_index);
		ft_get_best_rot_B(pile, pile->max_index_b);
		while (pile->len_b)
		{
			ft_putstr("pa\n");
			ft_pa(pile);
		}
	}
	ft_left_right_sort(pile);
	ft_medium_stack(pile);
}
