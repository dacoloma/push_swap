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

static int	ft_tablen(char **args)
{
	int	len;

	len = 0;
	while (args[len])
	{
		len++;
	}
	return (len);
}

static int	ft_convert(t_piles *pile, char **args)
{
	int			i;
	int			j;
	long long	tmp;

	i = ft_check_flag(args);
	j = 0;
	while (args[i])
	{
		tmp = ft_atol(args[i]);
		if (tmp >= INT_MIN && tmp <= INT_MAX)
			(pile->a)[j++] = (int)tmp;
		else
			return (INVALID);
		i++;
	}
	return (VALID);
}

static void	ft_init_var(t_piles *pile, char **args, int flag)
{
	pile->len = ft_tablen(args) - flag;
	pile->len_b = 0;
	pile->sorted_index_a = -1;
	pile->error = VALID;
	pile->max_index_b = 0;
}

int			ft_init(t_piles **pile, char **args, int flag)
{
	if (!(*pile = (t_piles *)malloc(sizeof(t_piles))))
		return (INVALID);
	ft_init_var(*pile, args, flag);
	if (!((*pile)->a = (int *)malloc(sizeof(int) * ((*pile)->len))))
	{
		ft_free(*pile, args);
		return (INVALID);
	}
	if (!((*pile)->b = (int *)malloc(sizeof(int) * ((*pile)->len))))
	{
		ft_free(*pile, args);
		return (INVALID);
	}
	if (!ft_convert(*pile, args))
	{
		ft_free(*pile, args);
		return (INVALID);
	}
	(*pile)->quick = ft_sort(*pile, QUICK_SORT);
	if ((*pile)->quick == NULL)
	{
		ft_free(*pile, args);
		return (INVALID);
	}
	return (VALID);
}

int			ft_init_checker(t_checker *checker)
{
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
	checker->ps_instruction = NULL;
	return (VALID);
}
