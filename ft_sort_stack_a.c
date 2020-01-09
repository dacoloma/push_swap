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

static void	ft_sort_right(t_piles *pile)
{
	int	sorted_pos_a;

	sorted_pos_a = ft_get_sorted_pos_A(pile);
	if (sorted_pos_a == pile->len_b + 2)
	{
		ft_putstr("sa\n");
		ft_sa(pile);
	}
	else if (pile->len_b == pile->med_index || sorted_pos_a == pile->len_b)
	{
		ft_putstr("ra\n");
		ft_ra(pile);
	}
	else if (sorted_pos_a == pile->len - 1)
	{
		ft_putstr("rra\n");
		ft_rra(pile);
		ft_putstr("sa\n");
		ft_sa(pile);
	}
	else
	{
		ft_putstr("pb\n");
		ft_pb(pile);
		ft_get_best_rot_A(pile, sorted_pos_a);
		ft_putstr("pa\n");
		ft_pa(pile);
	}
}

void		ft_sort_stack_a(t_piles *pile)
{
	while (!ft_check_sort(pile))
	{
		ft_sort_right(pile);
	}
}
