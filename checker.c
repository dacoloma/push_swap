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

static int	ft_do_instructions(t_piles *pile, t_checker *checker, int flag)
{
	int	i;

	i = 0;
	while (i < 11
		&& ft_strcmp(checker->ps_instruction, checker->instructions[i]))
		i++;
	free(checker->ps_instruction);
	if (i == 11)
	{
		ft_putstr_err("Error\n");
		return (1);
	}
	checker->ptr[i](pile);
	if (flag == 1)
		ft_print_piles(pile);
	return (0);
}

static int	ft_get_arg(int ac, char **av, char ***args)
{
	int		i;
	char	**tmp1;
	char	**tmp2;

	if (ac == 1)
		exit(0);
	if (ac < 2)
		return (0);
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
	return (1);
}

static int	ft_precheck(t_piles *pile, t_checker *checker, int f, char **args)
{
	if (ft_check(pile))
	{
		if (get_next_line(0, &(checker->ps_instruction)) == 1)
		{
			if (ft_do_instructions(pile, checker, f) == 0)
				ft_putstr("KO\n");
		}
		else
			ft_putstr("OK\n");
		ft_free_checker(pile, args, checker);
		return (0);
	}
	return (1);
}

int			main(int ac, char **av)
{
	char		**args;
	t_piles		*pile;
	t_checker	*checker;
	int			flag;

	if (!ft_get_arg(ac, av, &args) || ft_is_valid(args, &flag) == 0
		|| !ft_init(&pile, args, flag) || !ft_init_checker(&checker))
	{
		ft_putstr_err("Error\n");
		exit(-1);
	}
	if (!ft_precheck(pile, checker, flag, args))
		return (0);
	while (get_next_line(0, &(checker->ps_instruction)) == 1)
	{
		pile->error = ft_do_instructions(pile, checker, flag);
		if (pile->error)
			break ;
	}
	if (!pile->error && ft_check(pile))
		ft_putstr("OK\n");
	else if (!pile->error)
		ft_putstr("KO\n");
	ft_free_checker(pile, args, checker);
	return (0);
}
