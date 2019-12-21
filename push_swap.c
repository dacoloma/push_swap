/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:48:27 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/06 16:48:29 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_stack(t_piles *pile)
{
	int	i;

	// if (ft_check_sort(pile))
	// 	return ;
	i = pile->len_b;
	while (!ft_check_sort(pile))
	{
		while (i < pile->len && pile->a[i] < pile->a[i + 1])
		{
			ft_putstr("pb\n");
			ft_pb(pile);
			i = pile->len_b;
		}
		if (pile->a[i] > pile->a[i + 1])
		{
			ft_putstr("sa\n");
			ft_sa(pile);
		}
		if (ft_check_sort(pile))
		{
			while (pile->len_b > 0)
			{
				ft_putstr("pa\n");
				ft_pa(pile);
			}
		}
	}
}

int	main(int ac, char **av)
{
	char	**args;
	t_piles	*pile;
	
	if (ac < 2)
		return (0);
	if (ac == 2)
		args = ft_strsplit(av[1], ' ');
	else
		args = av + 1;
	if (ft_is_valid(args) == 0)
	{
		ft_putstr_err("Error\n");
		exit(-1);
	}
	// ft_print_char_tab(args);
	if (!ft_init(&pile, args))
	{
		exit(-1);
		DEBUG;
	}
	// ft_print_piles(pile);
	// ft_print_int_tab(pile->a, pile->len);
	// ft_sort(pile, QUICK_SORT);
	ft_sort_stack(pile);
	// ft_print_piles(pile);
	free(pile->a);
	free(pile->b);
	free(pile);
	return (0);
}
