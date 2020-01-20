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
		ft_memdel((void **)tab);
	}
}

void	ft_free(t_piles *pile, char **args)
{
	free(pile->a);
	free(pile->b);
	free(pile->quick.tab);
	free(pile);
	ft_free_tab(args);
}
