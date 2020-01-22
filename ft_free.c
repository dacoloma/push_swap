/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:26:13 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/09 14:26:15 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_tab(char **tab)
{
	int	i;

	if (tab != NULL)
	{
		i = 0;
		while (tab[i])
			ft_strdel(&tab[i++]);
		free(tab);
	}
}

void	ft_free(t_piles *pile, char **args)
{
	if (pile != NULL)
	{
		if (pile->a != NULL)
			free(pile->a);
		if (pile->b != NULL)
			free(pile->b);
		if (pile->quick != NULL)
			if (pile->quick->tab != NULL)
				free(pile->quick->tab);
		if (pile->quick != NULL)
			free(pile->quick);
		free(pile);
	}
	ft_free_tab(args);
}
