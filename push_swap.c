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

// static void	ft_pb_min(t_piles *pile)
// {
// 	int	i;

// 	if (pile->i_min <= 1)
// 		return ;
// 	i = 0;
// 	if (pile->i_min <= pile->len - pile->i_min)
// 	{
// 		while (i < pile->i_min)
// 		{
// 			ft_putstr("ra\n");
// 			ft_ra(pile);
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		while (i < pile->len - pile->i_min)
// 		{
// 			ft_putstr("rra\n");
// 			ft_rra(pile);
// 			i++;
// 		}
// 	}
// 	ft_pb(pile);
// }

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
