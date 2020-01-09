/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_split.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 14:50:37 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/09 14:50:39 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_split(t_piles *pile)
{
	int	i;

	i = pile->len_b;
	while (pile->a[i] >= pile->med)
		i++;
	if (i != pile->len)
		return (0);
	return (1);
}
