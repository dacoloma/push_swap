/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:50:28 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/12 15:50:30 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_piles *pile)
{
	int	i;
	int	j;

	if (pile->len > 0 && pile->len_b < pile->len)
	{
		// PUSH_B;
		i = pile->len_b;
		j = pile->len - 1 - pile->len_b;
		(pile->b)[j] = (pile->a)[i];
		if (pile->len_b == 0 || pile->a[i] > pile->limit_b)
			pile->limit_b = (pile->a)[i];
		// else if (pile->a[i] > pile->limit_b)
		// 	pile->limit_b = (pile->a)[i];
		pile->len_b++;
		pile->med_index--;
	}
}

void	ft_pa(t_piles *pile)
{
	int	i;
	int	j;
	
	if (pile->len > 0 && pile->len_b > 0)
	{
		// PUSH_A;
		i = pile->len_b - 1;
		j = pile->len - pile->len_b;
		(pile->a)[i] = (pile->b)[j];
		pile->len_b--;
	}
}
