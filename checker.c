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

	if (pile->len_b > 0)
		return (INVALID);
	i = 1;
	while (i < pile->len)
	{
		if (pile->a[i - 1] > pile->a[i])
		{
			return (INVALID);
		}
		i++;
	}
	return (VALID);
}

static int	ft_do_instructions(t_piles *pile, t_checker *checker, int flag,
	int ret)
{
	int	i;

	if (ret == GNL_ERROR)
	{
		ft_putstr_err("Error\n");
		return (INVALID);
	}
	i = 0;
	while (i < NB_INSTRUCTIONS
		&& ft_strcmp(checker->ps_instruction, checker->instructions[i]))
		i++;
	ft_strdel(&(checker->ps_instruction));
	if (i == NB_INSTRUCTIONS)
	{
		ft_putstr_err("Error\n");
		return (INVALID);
	}
	ft_get_med(pile);
	checker->ptr[i](pile);
	if (flag == 1)
		ft_print_piles(pile);
	return (VALID);
}

int			main(int ac, char **av)
{
	char		**args;
	t_piles		*pile;
	t_checker	checker;
	int			flag;
	int			ret;

	if (ft_is_valid(ac, av, &args, &flag) == INVALID
			|| ft_init(&pile, args, flag) == INVALID
				|| ft_init_checker(&checker) == INVALID)
	{
		ft_putstr_err("Error\n");
		return (EXIT_FAILURE);
	}
	while ((ret = get_next_line(0, &(checker.ps_instruction))))
	{
		pile->error = ft_do_instructions(pile, &checker, flag, ret);
		if (pile->error == INVALID)
			break ;
	}
	if (pile->error == VALID && ft_check(pile) == VALID)
		ft_putstr("OK\n");
	else if (pile->error == VALID)
		ft_putstr("KO\n");
	ft_free(pile, args);
	return (EXIT_SUCCESS);
}
