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
# define QUICK_SORT 0
# define ASC 0
# define DESC 1
# define DEBUG ft_print_piles(pile)
# define LEN printf("LEN = %d\n", pile->len);fflush(stdout)
# define LEN_B printf("LEN_B = %d\n", pile->len_b);fflush(stdout)
# define POS_A printf("POS_A = %d\n", sorted_pos_a);fflush(stdout)
# define POS_B printf("POS_B = %d\n", sorted_pos_b);fflush(stdout)
# define MAX_B printf("maxB = %d\tindex = %d\n", pile->b[pile->max_index_b],pile->max_index_b);fflush(stdout)
# define MED printf("\nmed = %d\tindex = %d\n", pile->med, pile->med_index);fflush(stdout)
# define SUB_MED printf("\nsub_med = %d\tindex = %d\n", sub_med, sub_med_index);fflush(stdout)
# define MIN_A printf("minA = %d\tindex = %d\n", pile->a[pile->min_index],pile->min_index);fflush(stdout)
# define SWAP_A printf("SA\n");fflush(stdout)
# define SWAP_B printf("SB\n");fflush(stdout)
# define PUSH_A printf("PA\n");fflush(stdout)
# define PUSH_B printf("PB\n");fflush(stdout)
# define ROTATE_A printf("RA\n");fflush(stdout)
# define ROTATE_B printf("RB\n");fflush(stdout)
# define RROTATE_A printf("RRA\n");fflush(stdout)
# define RROTATE_B printf("RRB\n");fflush(stdout)
# include "libft/includes/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_quicksort
{
	int	*tab;
	int	len;
	int	left;
	int	right;
	int	pivot;

}				t_quicksort;
typedef struct	s_piles
{
	int			*a;
	int			*b;
	int			min_index;
	int			max_index;
	int			len;
	int			len_b;
	int			med;
	int			med_index;
	int			max_index_b;
	int			sorted_index_a;
	t_quicksort	quick;
}				t_piles;
typedef struct	s_checker
{
	void	(*ptr[11])(t_piles *);
	char	*instructions[11];
	char	**to_check;

}				t_checker;
void	ft_putstr_err(char *err);
int		ft_init(t_piles **pile, char **tab);
void	ft_init_checker(t_checker *checker, char *buf);
int		ft_check_split(t_piles *pile);
int		ft_check_sort(t_piles *pile);
int		ft_is_valid(char **tab);
void	ft_pa(t_piles *pile);
void	ft_pb(t_piles *pile);
void	ft_sa(t_piles *pile);
void	ft_sb(t_piles *pile);
void	ft_ss(t_piles *pile);
void	ft_ra(t_piles *pile);
void	ft_rb(t_piles *pile);
void	ft_rr(t_piles *pile);
void	ft_rra(t_piles *pile);
void	ft_rrb(t_piles *pile);
void	ft_rrr(t_piles *pile);
t_quicksort	ft_sort(t_piles *pile, int sort);
void	ft_get_med(t_piles *pile);
int		ft_get_sorted_pos_A(t_piles *pile);
int		ft_get_sorted_pos_B(t_piles *pile);
int		ft_get_final_pos_A(t_piles *pile);
int		ft_get_index(int *tab, int val);
void	ft_get_min_index(t_piles *pile);
void	ft_get_max_index(t_piles *pile);
void	ft_get_best_rot_A(t_piles *pile, int pos);
void	ft_get_best_rot_B(t_piles *pile, int pos);
void	ft_sort_stack(t_piles *pile);
void	ft_sort_stack_a(t_piles *pile);
void	ft_short_stack(t_piles *pile);
void	ft_medium_stack(t_piles *pile);
void	ft_long_stack(t_piles *pile);
void	ft_sort_left(t_piles *pile);
void	ft_free(t_piles *pile, int ac, char **args);
void	ft_free_checker(char **to_check);
void	ft_print_piles(t_piles *pile);
#endif
