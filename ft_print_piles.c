/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_piles.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 13:47:49 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/10 13:47:52 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_print_stack(char stack, int *tab, int start, int len)
{
	int	i;

	ft_putstr("STACK_");
	ft_putchar(stack);
	ft_putstr(":\t");
	i = 0;
	while (i < start)
	{
		ft_putstr(".\t");
		i++;
	}
	while (i < len)
	{
		ft_putnbr(tab[i++]);
		ft_putchar('\t');
	}
	ft_putchar('\n');
}

void		ft_print_piles(t_piles *pile)
{
	ft_print_stack('A', pile->a, pile->len_b, pile->len);
	ft_print_stack('B', pile->b, pile->len - pile->len_b, pile->len);
	ft_putchar('\n');
}
