/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:50:37 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/12 15:50:39 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_piles *pile)
{
	int	i;
	int	tmp;

	if (pile->len - pile->len_b < 2)
		return ;
	i = pile->len_b + 1;
	tmp = (pile->a)[i - 1];
	while (i < pile->len)
	{
		(pile->a)[i - 1] = (pile->a)[i];
		i++;
	}
	(pile->a)[i - 1] = tmp;
	if (pile->med_index == pile->len_b)
		pile->med_index = pile->len - 1;
	else
		pile->med_index--;
	if (pile->min_index >= pile->len_b)
	{
		if (pile->min_index == pile->len_b)
			pile->min_index = pile->len - 1;
		else
			pile->min_index--;
	}
	pile->sorted_index_a--;
}

void	ft_rb(t_piles *pile)
{
	int	i;
	int	tmp;

	if (pile->len_b > 1)
	{
		i = pile->len - pile->len_b + 1;
		tmp = (pile->b)[i - 1];
		while (i < pile->len)
		{
			(pile->b)[i - 1] = (pile->b)[i];
			i++;
		}
		(pile->b)[i - 1] = tmp;
		if (pile->max_index_b == pile->len - pile->len_b)
			pile->max_index_b = pile->len - 1;
		else
			pile->max_index_b--;
	}
}

void	ft_rr(t_piles *pile)
{
	ft_ra(pile);
	ft_rb(pile);
}
