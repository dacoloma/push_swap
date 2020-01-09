/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:48:01 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/06 16:48:09 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check(t_piles *pile)
{
	int	i;

	i = 1;
	while (i < pile->len)
	{
		if (pile->a[i - 1] > pile->a[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

static void	ft_do_instructions(t_piles *pile, t_checker checker)
{
	int	i;

	i = 0;
	while (i < 11 && ft_strcmp(checker.ps_instruction, checker.instructions[i]))
		i++;
	if (i == 11)
	{
		ft_putstr_err("Error\n");
		exit(-1);
	}
	checker.ptr[i](pile);
}

int			main(int ac, char **av)
{
	char		**args;
	t_piles		*pile;
	t_checker	checker;

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
	if (!ft_init(&pile, args))
		exit(-1);
	ft_init_checker(&checker);
	while (get_next_line(0, &(checker.ps_instruction)) == 1)
		ft_do_instructions(pile, checker);
	if (ft_check(pile))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	ft_free(pile, ac, args);
	return (0);
}
