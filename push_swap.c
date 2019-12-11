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
	if (ft_is_valid(ac, av) == 0)
	{
		ft_putstr_err("Error\n");
		exit(-1);
	}
	int	i;

	i = 1;
	while (i < ac)
	{
		printf("%s\n", av[i]);
		fflush(stdout);
		i++;
	}
	return (0);
}
