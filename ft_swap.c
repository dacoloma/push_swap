/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:38:15 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/17 16:38:16 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_piles *pile)
{
	int	i;
	
	if (pile->len > 1 && pile->len - pile->len_b > 1)
	{
		i = pile->len_b;
		if (pile->med_index == i + 1)
			pile->med_index--;
		else if (pile->med_index == i)
			pile->med_index++;
		if (pile->min_index >= pile->len_b)
		{
			if (pile->min_index == i + 1)
				pile->min_index--;
			else if (pile->min_index == i)
				pile->min_index++;
		}
		ft_swap(&(pile->a)[i], &(pile->a)[i + 1]);
	}
}

void	ft_sb(t_piles *pile)
{
	int	i;

	if (pile->len_b > 1)
	{
		i = pile->len - pile->len_b;
		if (pile->max_index_b == i + 1)
			pile->max_index_b--;
		else if (pile->max_index_b == i)
			pile->max_index_b++;
		ft_swap(&(pile->b)[i], &(pile->b)[i + 1]);
	}
}

void	ft_ss(t_piles *pile)
{
	ft_sa(pile);
	ft_sb(pile);
}
