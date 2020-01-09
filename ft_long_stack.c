/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:51:20 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/09 14:51:22 by dcoloma          ###   ########.fr       */
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

	if (pile->len - pile->len_b <= 3)
		return (1);
	ft_get_med(pile);
	ft_get_min_index(pile);
	count = ft_count(pile);
	while (count > 0)
	{
		if (pile->a[pile->len_b] < pile->med)
		{
			ft_putstr("pb\n");
			ft_pb(pile);
			count--;
		}
		else
		{
			ft_putstr("ra\n");
			ft_ra(pile);
		}
	}
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

	ft_partition(pile);
	ft_short_stack(pile);
	while (pile->len_b)
	{
		best_move = ft_find_best_move(pile);
		ft_get_best_rot_B(pile, best_move);
		ft_get_best_rot_A(pile, ft_get_pos(pile));
		ft_putstr("pa\n");
		ft_pa(pile);
	}
	ft_get_min_index(pile);
	ft_get_best_rot_A(pile, pile->min_index);
}
