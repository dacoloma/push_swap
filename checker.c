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
			return (INVALID);
		}
		i++;
	}
	return (VALID);
}

static int	ft_do_instructions(t_piles *pile, t_checker *checker, int flag)
{
	int	i;

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
	checker->ptr[i](pile);
	if (flag == 1)
		ft_print_piles(pile);
	return (VALID);
}

static int	ft_get_arg(int ac, char **av, char ***args)
{
	int		i;
	char	**tmp1;
	char	**tmp2;

	if (ac == 1)
		exit(0);
	if (ac < 2)
		return (INVALID);
	*args = ft_strsplit(av[1], ' ');
	i = 2;
	while (i < ac && av[i])
	{
		tmp1 = *args;
		tmp2 = ft_strsplit(av[i], ' ');
		*args = ft_tabjoin(tmp1, tmp2);
		ft_free_tab(tmp1);
		ft_free_tab(tmp2);
		i++;
	}
	return (VALID);
}

int			main(int ac, char **av)
{
	char		**args;
	t_piles		*pile;
	t_checker	checker;
	int			flag;

	if (ft_get_arg(ac, av, &args) == INVALID
		|| ft_is_valid(args, &flag) == INVALID
			|| ft_init(&pile, args, flag) == INVALID
				|| ft_init_checker(&checker) == INVALID)
	{
		ft_putstr_err("Error\n");
		return (-1);
	}
	while (get_next_line(0, &(checker.ps_instruction)) == 1)
	{
		pile->error = ft_do_instructions(pile, &checker, flag);
		if (pile->error == INVALID)
			break ;
	}
	if (pile->error == VALID && ft_check(pile) == VALID)
		ft_putstr("OK\n");
	else if (pile->error == VALID)
		ft_putstr("KO\n");
	ft_free(pile, args);
	return (0);
}
