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

void	ft_do_instructions(t_piles *pile, t_checker checker)
{
	int	i;
	int	j;

	i = 0;
	(void)pile;
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
	ft_do_instructions(pile, checker);
	if (ft_check_sort(pile, 0))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	// close(fd);
	free(pile->a);
	free(pile->b);
	free(pile);
	return (0);
}
