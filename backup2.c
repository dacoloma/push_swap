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

static int	ft_count(t_piles *pile)
{
	int	i;
	int count;

	count = 0;
	i = pile->len_b;
	while (i < pile->len)
	{
		if (pile->a[i] < pile->med)
			count++;
		i++;
	}
	return (count);
}

// static void	ft_sub_partition(t_piles *pile)
// {
// 	int	sub_med;
// 	int	sub_med_index;
// 	int	min;

// 	min = pile->a[pile->min_index];
// 	sub_med_index = pile->len / 2 + ft_get_index(pile->quick.tab, min) / 2;
// 	sub_med = pile->quick.tab[sub_med_index];
// 	MED;
// 	SUB_MED;
// 	if (pile->len_b > 1)
// 		if (pile->b[pile->len - pile->len_b] < sub_med)
// 		{
// 			ft_putstr("rb\n");
// 			ft_rb(pile);
// 		}
// }

int			ft_partition(t_piles *pile)
{
	int	count;

	if (pile->len - pile->len_b <= 3)// && ft_check_split(pile))
		return (1);
	ft_get_med(pile);
	ft_get_min_index(pile);
	// MIN_A;
	count = ft_count(pile);
	while (count > 0)
	{
		if (pile->a[pile->len_b] < pile->med)
		{
			ft_putstr("pb\n");
			ft_pb(pile);
			// ft_sub_partition(pile);
			count--;
		}
		else
		{
			ft_putstr("ra\n");
			ft_ra(pile);
		}
		// DEBUG;
		// sleep(1);
	}
	// MED;
	// sleep(1);
	ft_partition(pile);
	return (0);
}

static int			ft_get_pos(t_piles *pile)
{
	int	i;
	int	j;

	ft_get_min_index(pile);
	i = pile->min_index;
	j = pile->len - pile->len_b;
	while (pile->a[i] < pile->b[j])
	{
		i++;
		if (i == pile->len)
			i = pile->len_b;
	}
	return (i);
}



void		ft_long_stack(t_piles *pile)
{
	ft_partition(pile);
	ft_short_stack(pile);
	// DEBUG;
	int	sorted_pos_a;
	while (pile->len_b)
	{
		sorted_pos_a = ft_get_pos(pile);
		ft_get_best_rot_A(pile, sorted_pos_a);
		ft_putstr("pa\n");
		ft_pa(pile);
	}
	ft_get_min_index(pile);
	ft_get_best_rot_A(pile, pile->min_index);
}
