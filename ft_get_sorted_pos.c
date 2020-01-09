/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_sorted_pos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 10:55:42 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/02 10:55:44 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_get_sorted_pos_B(t_piles *pile)
{
	int	i;
	int	j;
	int	count;

	i = pile->len_b;
	count = pile->len_b;
	j = pile->max_index_b;
	if (pile->len_b > 0)
	{
		while (count != 0 && pile->a[i] < pile->b[j])
		{
			j++;
			count--;
			if (j == pile->len)
				j = pile->len - pile->len_b;
		}
	}
	return (j);
}

int		ft_get_sorted_pos_A(t_piles *pile)
{
	int	i;
	int	j;

	i = pile->len_b;
	if (pile->len > 3)
	{
		if (pile->med_index + 1 == pile->len)
			j = pile->len_b;
		else
			j = pile->med_index + 1;
	}
	else
	{
		if (pile->min_index + 1 == pile->len)
			j = pile->len_b;
		else
			j = pile->min_index + 1;
	}
	
	while (pile->a[i] > pile->a[j] && pile->a[j] > pile->med)
	{
		j++;
		if (j == pile->len)
			j = pile->len_b;
	}
	return (j);
}
