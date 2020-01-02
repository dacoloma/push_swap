/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_min_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 10:55:22 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/02 10:55:23 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_min_index(t_piles *pile)
{
	int i;
	int	min;

	i = pile->len_b + 1;
	min = pile->a[pile->len_b];
	pile->min_index = pile->len_b;
	while (i < pile->len)
	{
		if (pile->a[i] < min)
		{
			pile->min_index = i;
			min = pile->a[i];
		}
		i++;
	}	
}
