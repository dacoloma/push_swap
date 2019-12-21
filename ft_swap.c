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
	
	if (pile->len > 1)
	{
		// SWAP_A;
		i = pile->len_b;
		ft_swap(&(pile->a)[i], &(pile->a)[i + 1]);
	}
}

void	ft_sb(t_piles *pile)
{
	int	i;

	if (pile->len_b > 1)
	{
		// SWAP_B;
		i = pile->len - pile->len_b;
		ft_swap(&(pile->b)[i], &(pile->b)[i + 1]);
	}
}

void	ft_ss(t_piles *pile)
{
	ft_sa(pile);
	ft_sb(pile);
}
