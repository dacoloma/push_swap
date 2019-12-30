#include "push_swap.h"

static void	ft_short_stack(t_piles *pile)
{
	while (!ft_check_sort(pile, ASC))
	{
		ft_putstr("sa\n");
		ft_sa(pile);
	}
	ft_get_best_rot_A(pile, pile->min_index);
}

static void	ft_left_right_sort(t_piles *pile)
{
	if (!ft_check_sort(pile, 0))
	{
		if (pile->a[pile->len_b] < pile->med)
		{
			ft_putstr("pb\n");
			ft_pb(pile);
		}
		else
		{
			ft_putstr("ra\n");
			ft_ra(pile);
		}
	}
}

void		ft_sort_stack(t_piles *pile)
{
	if (pile->min_index == 0 && ft_check_sort(pile, 0))
		return ;
	if (pile->len - pile->len_b <= 3)
	{
		if (!pile->len_b || (pile->len_b
			&& pile->a[pile->min_index] > pile->b[pile->max_index_b]))
			ft_short_stack(pile);
	}
	if  (ft_check_sort(pile, 0))
	{
		//REARRANGE STACK A
		if (!pile->len_b
			|| (pile->len_b && pile->b[pile->max_index_b] < pile->a[pile->min_index]))
			ft_get_best_rot_A(pile, pile->min_index);
		else
			ft_get_best_rot_A(pile, pile->med_index);
		//REARRANGE STACK B
		ft_get_best_rot_B(pile, pile->max_index_b);
		while (pile->len_b)
		{
			ft_putstr("pa\n");
			ft_pa(pile);
		}
	}
	ft_left_right_sort(pile);
	ft_sort_stack(pile);
}