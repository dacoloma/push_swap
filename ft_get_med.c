/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_med.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 10:55:16 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/02 10:55:17 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_med(t_piles *pile)
{
	int			i;
	int			med;

	med = pile->len / 2 + pile->len_b / 2;
	pile->med = pile->quick.tab[med];
	i = 0;
	while (pile->a[i] && pile->a[i] != pile->med)
	{
		i++;
	}
	pile->med_index = i;
	// printf("med = %d\nindex = %d\n", pile->med, pile->med_index);
	// fflush(stdout);
}

// void	ft_get_med(t_piles *pile)
// {
// 	t_quicksort quick;
// 	int			i;

// 	quick = ft_sort(pile, QUICK_SORT);
// 	pile->med = quick.tab[quick.len / 2];
// 	i = 0;
// 	while (pile->a[i] && pile->a[i] != pile->med)
// 	{
// 		i++;
// 	}
// 	pile->med_index = i;
// 	free(quick.tab);
// 	// printf("med = %d\nindex = %d\n", pile->med, pile->med_index);
// 	// fflush(stdout);
// }
