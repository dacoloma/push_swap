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

static void	ft_result(t_piles *pile, char **args)
{
	if (pile->error == INVALID)
	{
		ft_free(pile, args);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (pile->error == VALID && ft_check(pile) == VALID)
		{
			if (pile->len > 0)
				ft_putstr("OK\n");
			else
			{
				ft_free(pile, args);
				ft_putstr_err("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		else if (pile->error == VALID)
			ft_putstr("KO\n");
	}
	ft_free(pile, args);
}

int			main(int ac, char **av)
{
	char		**args;
	t_piles		*pile;
	t_checker	checker;
	int			ret;

	if (!(pile = (t_piles *)malloc(sizeof(t_piles))))
		return (EXIT_FAILURE);
	ft_init_var(pile);
	pile->checker = 1;
	args = NULL;
	if (ft_is_valid(ac, av, &args, pile) == INVALID
			|| ft_init(pile, args) == INVALID
				|| ft_init_checker(&checker) == INVALID)
	{
		ft_free(pile, args);
		ft_putstr_err("Error\n");
		return (EXIT_FAILURE);
	}
	while ((ret = get_next_line(0, &(checker.ps_instruction))))
	{
		pile->error = ft_do_instructions(pile, &checker, pile->flag, ret);
		if (pile->error == INVALID)
			break ;
	}
	ft_result(pile, args);
	return (EXIT_SUCCESS);
}
