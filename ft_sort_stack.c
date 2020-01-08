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

void	ft_short_stack(t_piles *pile)
{
	while (!ft_check_sort(pile))
	{
		ft_putstr("sa\n");
		ft_sa(pile);
	}
	ft_get_best_rot_A(pile, pile->min_index);
}

void	ft_sort_left(t_piles *pile)
{
	int	sorted_pos_b;
	
	sorted_pos_b = ft_get_sorted_pos_B(pile);
	ft_get_best_rot_B(pile, sorted_pos_b);
	ft_putstr("pb\n");
	ft_pb(pile);
}

void		ft_sort_stack(t_piles *pile)
{
	if (ft_check_sort(pile) && pile->min_index == 0)
		return ;
	if (pile->len < 7)
		ft_medium_stack(pile);
	else
	{
		ft_long_stack(pile);
	}
}
