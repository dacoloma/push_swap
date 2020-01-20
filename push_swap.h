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
# define VALID 1
# define INVALID 0
# define NB_INSTRUCTIONS 11
# define INT_MIN -2147483648
# define INT_MAX 2147483647
# include "libft.h"
# include "ft_printf.h"
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
	int			error;
}				t_piles;
typedef struct	s_checker
{
	void	(*ptr[NB_INSTRUCTIONS])(t_piles *);
	char	*instructions[NB_INSTRUCTIONS];
	char	*ps_instruction;

}				t_checker;
void			ft_putstr_err(char *err);
int				ft_init(t_piles **pile, char **tab, int flag);
int				ft_init_checker(t_checker *checker);
int				ft_check_flag(char **tab);
int				ft_check_split(t_piles *pile);
int				ft_check_sort(t_piles *pile);
int				ft_isnumber(char *str);
int				ft_is_valid(char **tab, int *flag);
void			ft_pa(t_piles *pile);
void			ft_pb(t_piles *pile);
void			ft_sa(t_piles *pile);
void			ft_sb(t_piles *pile);
void			ft_ss(t_piles *pile);
void			ft_ra(t_piles *pile);
void			ft_rb(t_piles *pile);
void			ft_rr(t_piles *pile);
void			ft_rra(t_piles *pile);
void			ft_rrb(t_piles *pile);
void			ft_rrr(t_piles *pile);
t_quicksort		ft_sort(t_piles *pile, int sort);
void			ft_get_med(t_piles *pile);
int				ft_get_sorted_pos_a(t_piles *pile);
int				ft_get_sorted_pos_b(t_piles *pile);
int				ft_get_final_pos_a(t_piles *pile);
int				ft_get_index(int *tab, int val);
void			ft_get_min_index(t_piles *pile);
void			ft_get_max_index(t_piles *pile);
void			ft_get_best_rot_a(t_piles *pile, int pos);
void			ft_get_best_rot_b(t_piles *pile, int pos);
void			ft_sort_stack(t_piles *pile);
void			ft_sort_stack_a(t_piles *pile);
void			ft_short_stack(t_piles *pile);
void			ft_medium_stack(t_piles *pile);
void			ft_long_stack(t_piles *pile);
void			ft_sort_left(t_piles *pile);
void			ft_free(t_piles *pile, char **args);
void			ft_free_tab(char **tab);
int				ft_rot_count_a(t_piles *pile, int index);
int				ft_rot_count_b(t_piles *pile, int index);
void			ft_print_piles(t_piles *pile);
#endif
