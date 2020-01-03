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

static void	ft_short_stack(t_piles *pile)
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
	// POS_B;
	if (sorted_pos_b < 1)
	{
		ft_putstr("pb\n");
		ft_pb(pile);
	}
	else
	{
		ft_get_best_rot_B(pile, sorted_pos_b);
		ft_putstr("pb\n");
		ft_pb(pile);
	}
}

void	ft_almost_sort_right(t_piles *pile)
{
	int	sorted_pos_a;

	sorted_pos_a = ft_get_sorted_pos_A(pile);
	// POS_A;
	if (sorted_pos_a == pile->len - 1)
	{
		if (pile->a[pile->len_b + 1] > pile->med && pile->a[pile->len_b + 1] < pile->a[pile->len_b])
		{
			ft_putstr("sa\n");
			ft_sa(pile);
		}
		pile->sorted_index_a = sorted_pos_a;
		ft_get_best_rot_A(pile, pile->len_b + 1);
		return ;
	}
	if (sorted_pos_a == pile->len - 1)
	{
		ft_get_best_rot_A(pile, pile->len_b + 1);
		return ;
	}
	ft_putstr("pb\n");
	ft_pb(pile);
	ft_get_best_rot_A(pile, sorted_pos_a);
	ft_putstr("pa\n");
	ft_pa(pile);
	ft_putstr("ra\n");
	ft_ra(pile);
}

static void	ft_split_stack(t_piles *pile)
{
	int	i;

	i = 0;
	while (pile->a[pile->min_index] < pile->med)
	{
		// MED;
		// DEBUG;
		if (pile->a[pile->len_b] < pile->med)
			ft_sort_left(pile);
		else
			ft_almost_sort_right(pile);
		i++;
		// sleep(1);
	}
}

void	ft_sort_right(t_piles *pile)
{
	int	sorted_pos_a;
	int	i;
	int	j;
	int	count;

	count = 0;
	i = pile->med_index;
	j = (pile->med_index + 1 < pile->len) ? pile->med_index + 1 : pile->len_b;
	while (pile->a[i] < pile->a[j] && count < pile->len - pile->len_b)
	{
		i++;
		j++;
		if (i == pile->len)
			i = pile->len_b;
		if (j == pile->len)
			j = pile->len_b;
	}
		count++;
	ft_get_best_rot_A(pile, j);

	sorted_pos_a = ft_get_final_pos_A(pile);
	// POS_A;
	if (sorted_pos_a == pile->len - 1)
	{
		ft_putstr("rra\n");
		ft_rra(pile);
		ft_putstr("sa\n");
		ft_sa(pile);
		return ;
	}
	if (sorted_pos_a == pile->len_b + 2)
	{
		ft_putstr("sa\n");
		ft_sa(pile);
		return ;
	}
	ft_putstr("pb\n");
	ft_pb(pile);
	ft_get_best_rot_A(pile, sorted_pos_a);
	ft_putstr("pa\n");
	ft_pa(pile);
}

void		ft_sort_stack(t_piles *pile)
{
	if (pile->len <= 3)
	{
		ft_short_stack(pile);
		return ;
	}
	ft_split_stack(pile);
	// DEBUG;
	// MED;
	while (!ft_check_sort(pile))
	{
		ft_sort_right(pile);
		// DEBUG;
		// sleep(1);
	}
	//REARRANGE STACK A
	if (!pile->len_b
		|| (pile->len_b && pile->b[pile->max_index_b] < pile->a[pile->min_index]))
		ft_get_best_rot_A(pile, pile->min_index);
	else
		ft_get_best_rot_A(pile, pile->med_index);
	//REARRANGE STACK B
	ft_get_best_rot_B(pile, pile->max_index_b);
	//FUSION
	while (pile->len_b)
	{
		ft_putstr("pa\n");
		ft_pa(pile);
	}
}
