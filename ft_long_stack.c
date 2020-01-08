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
	// DEBUG;
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

static int	ft_rot_count_A(t_piles *pile, int index)
{
	int	i;
	int	j;
	int count;

	ft_get_min_index(pile);
	i = pile->min_index;
	j = index;
	while (pile->a[i] < pile->b[j])
	{
		i++;
		if (i == pile->len)
			i = pile->len_b;
	}
	if (i > (pile->len + pile->len_b) / 2)
		count = pile->len - i;
	else
		count = i - pile->len_b;
	return (count);
}

static int	ft_rot_count_B(t_piles *pile, int index)
{
	int count;

	if (index > pile->len - pile->len_b / 2)
		count = pile->len - index;
	else
		count = index - (pile->len - pile->len_b);
	return (count);
}

static int	ft_find_best_move(t_piles *pile)
{
	int	count;
	int	best_val;
	int	best_move;
	int	i;

	i = pile->len - pile->len_b;
	best_val = i;
	best_move = 0;
	while (i < pile->len)
	{
		count = ft_rot_count_B(pile, i) + ft_rot_count_A(pile, i) + 1;
		if (!best_move || count < best_move)
		{
			best_move = count;
			best_val = i;
		}
		i++;
	}
	return (best_val);
}

void		ft_long_stack(t_piles *pile)
{
	int	best_move;

	// Split
	ft_partition(pile);
	ft_short_stack(pile);
	// DEBUG;
	// sleep(1);
	while (pile->len_b)
	{
		best_move = ft_find_best_move(pile);
		ft_get_best_rot_B(pile, best_move);
		ft_get_best_rot_A(pile, ft_get_pos(pile));
		ft_putstr("pa\n");
		ft_pa(pile);
		// DEBUG;
		// sleep(1);
	}
	ft_get_min_index(pile);
	ft_get_best_rot_A(pile, pile->min_index);
}

/*
void 	ft_get_best_rot_A(t_piles *pile, int pos)
{
	int	i;
	int	limit;

	i = 0;
	if (pos > (pile->len + pile->len_b) / 2)
	{
		limit = pile->len - pos;
		while (i < limit)
		{
			ft_putstr("rra\n");
			ft_rra(pile);
			i++;
		}
	}
	else
	{
		limit = pos - pile->len_b;
		while (i < limit)
		{
			ft_putstr("ra\n");
			ft_ra(pile);
			i++;
		}
	}
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
*/
