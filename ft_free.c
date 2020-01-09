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

void	ft_free(t_piles *pile, int ac, char **args)
{
	int	i;

	i = 0;
	free(pile->a);
	free(pile->b);
	if (ac == 2)
	{
		while (i < pile->len)
			free(args[i++]);
		free(args);
	}
	free(pile->quick.tab);
	free(pile);
}

void	ft_free_checker(char **to_check)
{
	int	i;

	i = 0;
	while (to_check[i])
		free(to_check[i++]);
	free(to_check);
}
