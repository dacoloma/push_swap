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
	{
		free(*pile);
		return (0);
	}
	if (!((*pile)->b = (int *)malloc(sizeof(int) * ((*pile)->len))))
	{
		free((*pile)->a);
		free(*pile);
		return (0);
	}
	i = 0;
	while (tab[i])
	{
		((*pile)->a)[i] = ft_atoi(tab[i]);
		i++;
	}
	(*pile)->len = i;
	(*pile)->len_b = 0;
	return (1);
}

// void	push_n_times(void (*push)(t_piles *), t_piles *pile, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		(*push)(pile);
// 		i++;
// 	}
// }

// void	rotate_n_times(void (*rotate)(t_piles *), t_piles *pile, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < n)
// 	{
// 		(*rotate)(pile);
// 		i++;
// 	}
// }

int	main(int ac, char **av)
{
	char	**args;
	t_piles	*pile;
	int		ret;
	char	buf[4096];
	char	**instruction;
	int		fd;

	fd = open("test", O_RDONLY);
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
	{
		exit(-1);
		DEBUG;
	}
	ret = read(fd, buf, 4095);
	buf[ret] = '\0';
	instruction = ft_strsplit(buf, '\n');
	int 	i;

	i = 0;
	while (instruction[i])
		printf("%s\n", instruction[i++]);
	close(fd);
	free(pile->a);
	free(pile->b);
	free(pile);
	return (0);
}
/*
	ft_putchar('\n');
	// ft_print_piles(pile);
	// ft_pb(pile);
	// ft_sb(pile);
	// ft_pb(pile);
	// ft_sb(pile);
	// ft_pb(pile);
	// ft_print_piles(pile);
	// ft_ss(pile);
	// ft_print_piles(pile);
	// ft_sb(pile);
	// ft_print_piles(pile);
	// push_n_times(&ft_pa, pile, 8);
	ft_print_piles(pile);
	// rotate_n_times(&ft_ra, pile, 3);
	rotate_n_times(&ft_rra, pile, 3);
	ft_print_piles(pile);
	push_n_times(&ft_pb, pile, 4);
	ft_print_piles(pile);
	// rotate_n_times(&ft_rb, pile, 3);
	rotate_n_times(&ft_rrb, pile, 3);
	ft_print_piles(pile);
*/