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
	int			med;

	med = pile->len / 2 + pile->len_b / 2;
	pile->med = pile->quick.tab[med];
	pile->med_index = ft_get_index(pile->a, pile->med);
}
