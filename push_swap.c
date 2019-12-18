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

int		ft_print_int_tab(int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		printf("%d\n", tab[i++]);
		fflush(stdout);
	}
	return (i);
}

int		ft_print_char_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i++]);
		fflush(stdout);
	}
	return (i);
}

int		ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

void	ft_putstr_err(char *err)
{
	int	i;

	i = 0;
	while (err[i])
		write(2, &err[i++], 1);
}

int		ft_init(t_piles **pile, char **tab)
{
	int	i;

	if (!(*pile = (t_piles *)malloc(sizeof(t_piles))))
		return (0);
	(*pile)->len = ft_tablen(tab);
	if (!((*pile)->a = (int *)malloc(sizeof(int) * ((*pile)->len))))
		return (0);
	if (!((*pile)->b = (int *)malloc(sizeof(int) * ((*pile)->len))))
		return (0);
	i = 0;
	while (tab[i])
	{
		((*pile)->a)[i] = ft_atoi(tab[i]);
		i++;
	}
	return (1);
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
	ft_print_int_tab(pile->a, pile->len);
	// ft_sort(&pile_a, )
	return (0);
}
