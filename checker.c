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

static int		ft_check(t_piles *pile)
{
	int	i;

	i = 1;
	while (i < pile->len)
	{
		if (pile->a[i - 1] > pile->a[i])
		{
			printf("a[%d] = %d\na[%d] = %d\n", i - 1, pile->a[i - 1], i, pile->a[i]);
			return (0);
		}
		i++;
	}
	printf("a[0] = %d\na[1] = %d\n", pile->a[0], pile->a[1]);
	return (1);
}


// BUG ICI 
void	ft_do_instructions(t_piles *pile, t_checker checker)
{
	int	i;
	int	j;

	i = 0;
	while (checker.to_check[i])
	{
		j = 0;
		while (j < 11 && ft_strcmp(checker.to_check[i], checker.instructions[j]))
			j++;
		checker.ptr[j](pile);
		// ft_print_piles(pile);
		i++;
	}
}

int	main(int ac, char **av)
{
	char		**args;
	t_piles		*pile;
	t_checker	checker;
	int			ret;
	char		buf[4096];
	// int		fd;		// A SUPPRIMER

	// fd = open("test", O_RDONLY);
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
	// ft_print_piles(pile);
	// ret = read(fd, buf, 4095);	// 
	ret = read(0, buf, 4095);
	buf[ret] = '\0';
	ft_init_checker(&checker, buf);
	if (checker.to_check == NULL)
	{
		if (ft_check(pile))
			ft_putstr("OK\n");
		else
			ft_putstr("KO\n");
		printf("BOUCLE 1\n");
	}
	else
	{
		ft_do_instructions(pile, checker);
		if (ft_check(pile))
			ft_putstr("OK\n");
		else
			ft_putstr("KO\n");
		printf("BOUCLE 2\n");
	}
	// printf("DEBUG\n");
	// close(fd);
	// free(pile->a);
	// free(pile->b);
	// free(pile);
	// printf("FREE\n");
	return (0);
}
