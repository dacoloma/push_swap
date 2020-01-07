/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:04:53 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/07 15:04:54 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_index(int *tab, int val)
{
	int			i;
	
	i = 0;
	while (tab[i] && tab[i] != val)
	{
		i++;
	}
	return (i);
	// printf("med = %d\nindex = %d\n", pile->med, pile->med_index);
	// fflush(stdout);
}
