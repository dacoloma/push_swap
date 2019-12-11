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

void	ft_putstr_err(char *err)
{
	int	i;

	i = 0;
	while (err[i])
		write(2, &err[i++], 1);
}

int	main(int ac, char **av)
{
	int	*pile_a;
	int	*pile_b;
	int	i;
	int	j;
	
	if (ft_is_valid(ac, av) == 0)
	{
		ft_putstr_err("Error\n");
		exit(-1);
	}
	if (!(pile_a = (int *)malloc(sizeof(int) * (ac - 1))))
		exit(-1);
	if (!(pile_b = (int *)malloc(sizeof(int) * (ac - 1))))
		exit(-1);

	i = 1;
	j = 0;
	while (i < ac)
		pile_a[j++] = ft_atoi(av[i++]);
	j = 0;
	while (j < ac - 1)
	{
		printf("%d\n", pile_a[j]);
		fflush(stdout);
		j++;

	}	
	return (0);
}
