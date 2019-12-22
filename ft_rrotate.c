/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:51:00 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/12 15:51:02 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_piles *pile)
{
	int	i;
	int	tmp;

	if (pile->len > 1)
	{
		// RROTATE_A;
		i = pile->len - 1;
		tmp = (pile->a)[i];
		while (i > pile->len_b)
		{
			(pile->a)[i] = (pile->a)[i - 1];
			i--;
		}
		(pile->a)[i] = tmp;
		if (pile->med_index == pile->len - 1)
			pile->med_index = pile->len_b;
		else
			pile->med_index++;
		
	}
}

void	ft_rrb(t_piles *pile)
{
	int	i;
	int	tmp;

	if (pile->len_b > 1)
	{
		// RROTATE_B;
		i = pile->len - 1;
		tmp = (pile->b)[i];
		while (i > pile->len_b)
		{
			(pile->b)[i] = (pile->b)[i - 1];
			i--;
		}
		(pile->b)[i] = tmp;
		if (pile->limit_b == pile->len - 1)
			pile->limit_b = pile->len - pile->len_b;
		else
			pile->limit_b++;
	}
}

void	ft_rrr(t_piles *pile)
{
	ft_rra(pile);
	ft_rrb(pile);
}
