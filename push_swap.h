/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 16:21:33 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/11 16:55:20 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define QUICK_SORT 1
# define DEBUG printf("DEBUG\n");fflush(stdout)
# include "libft/includes/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_piles
{
	int	*a;
	int	*b;
	int	len;
	int	len_b;
}				t_piles;
typedef struct	s_quicksort
{
	int	left;
	int	right;
	int	pivot;

}				t_quicksort;
void	ft_print_piles(t_piles *pile);
int		ft_is_valid(char **tab);
void	ft_pa(t_piles *pile);
void	ft_pb(t_piles *pile);
void	ft_sa(t_piles *pile);
void	ft_sb(t_piles *pile);
void	ft_ss(t_piles *pile);
void	ft_ra(t_piles *pile);
void	ft_rb(t_piles *pile);
void	ft_rr(t_piles *pile);
#endif
