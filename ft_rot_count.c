/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_count.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:07:34 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/09 17:07:37 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rot_count_a(t_piles *pile, int index)
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

int	ft_rot_count_b(t_piles *pile, int index)
{
	int count;

	if (index > pile->len - pile->len_b / 2)
		count = pile->len - index;
	else
		count = index - (pile->len - pile->len_b);
	return (count);
}
