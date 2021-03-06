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

int	ft_get_index(t_piles *pile)
{
	int	i;

	i = pile->len_b;
	while (i < pile->len && pile->a[i] != pile->med)
	{
		i++;
	}
	return (i);
}
