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
	if (pile->len > 1)
		ft_swap(&(pile->a)[pile->len_b], &(pile->a)[pile->len_b +1]);
}

void	ft_sb(t_piles *pile)
{
	if (pile->len_b > 1)
		ft_swap(&(pile->b)[pile->len - 1 - pile->len_b],
			&(pile->b)[pile->len - pile->len_b]);
}

void	ft_ss(t_piles *pile)
{
	ft_sa(pile);
	ft_sb(pile);
}
