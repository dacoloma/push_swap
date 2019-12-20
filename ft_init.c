/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 15:24:17 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/20 15:24:22 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_tablen(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

int			ft_init(t_piles **pile, char **tab)
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

void		ft_init_checker(t_checker *checker, char *buf)
{
	checker->to_check = ft_strsplit(buf, '\n');
	checker->ptr[0] = &ft_pa;
	checker->ptr[1] = &ft_pb;
	checker->ptr[2] = &ft_sa;
	checker->ptr[3] = &ft_sb;
	checker->ptr[4] = &ft_ss;
	checker->ptr[5] = &ft_ra;
	checker->ptr[6] = &ft_rb;
	checker->ptr[7] = &ft_rr;
	checker->ptr[8] = &ft_rra;
	checker->ptr[9] = &ft_rrb;
	checker->ptr[10] = &ft_rrr;
	checker->instructions[0] = "pa";
	checker->instructions[1] = "pb";
	checker->instructions[2] = "sa";
	checker->instructions[3] = "sb";
	checker->instructions[4] = "ss";
	checker->instructions[5] = "ra";
	checker->instructions[6] = "rb";
	checker->instructions[7] = "rr";
	checker->instructions[8] = "rra";
	checker->instructions[9] = "rrb";
	checker->instructions[10] = "rrr";
}
