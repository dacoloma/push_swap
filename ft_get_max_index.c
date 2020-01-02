/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 10:55:03 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/02 10:55:04 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_max_index(t_piles *pile)
{
	int i;
	int	max;

	i = pile->len_b + 1;
	max = pile->a[pile->len_b];
	pile->max_index = pile->len_b;
	while (i < pile->len)
	{
		if (pile->a[i] > max)
		{
			pile->max_index = i;
			max = pile->a[i];
		}
		i++;
	}
}
