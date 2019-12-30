#include "push_swap.h"

void	ft_short_stack(t_piles *pile)
{
	while (!ft_check_sort(pile))
	{
		ft_putstr("sa\n");
		ft_sa(pile);
	}
	ft_get_best_rot_A(pile, pile->min_index);
}

void	ft_sort_left(t_piles *pile)
{
	int	sorted_pos_b;
	
	sorted_pos_b = ft_get_sorted_pos_B(pile);
	if (sorted_pos_b < 1)
	{
		ft_putstr("pb\n");
		ft_pb(pile);
	}
	else
	{
		ft_get_best_rot_B(pile, sorted_pos_b);
		ft_putstr("pb\n");
		ft_pb(pile);
	}
}

void	ft_sort_right(t_piles *pile)
{
	int	sorted_pos_a;

	sorted_pos_a = ft_get_sorted_pos_A(pile);
	// POS_A;
	if (sorted_pos_a == pile->len_b + 2)
	{
		ft_putstr("sa\n");
		ft_sa(pile);
		if (!ft_check_sort(pile))
		{
			ft_putstr("ra\n");
			ft_ra(pile);
			// ft_putstr("ra\n");
			// ft_ra(pile);
		}
	}
	else if (pile->len_b == pile->med_index || sorted_pos_a == pile->len_b)
	{
		ft_putstr("ra\n");
		ft_ra(pile);
	}
	else if (sorted_pos_a == pile->len - 1)
	{
		ft_putstr("rra\n");
		ft_rra(pile);
		ft_putstr("sa\n");
		ft_sa(pile);
		// DEBUG;
		if (!ft_check_sort(pile))
		{
			ft_putstr("ra\n");
			ft_ra(pile);
			// ft_putstr("ra\n");
			// ft_ra(pile);
		}
	}
	else
	{
		ft_putstr("pb\n");
		ft_pb(pile);
		ft_get_best_rot_A(pile, sorted_pos_a);
		ft_putstr("pa\n");
		ft_pa(pile);
		ft_putstr("ra\n");
		ft_ra(pile);
	}
	
}

void	ft_sort_stack(t_piles *pile)
{
	// int	count;

	// count = pile->len;
	// ft_print_piles(pile);
	if (pile->len <= 3)
	{
		ft_short_stack(pile);
		return ;
	}
	while (!ft_check_sort(pile))
	{
		if (pile->a[pile->len_b] < pile->med)
			ft_sort_left(pile);
		else
			ft_sort_right(pile);
		// count--;
		// DEBUG;
	}
	// ft_print_piles(pile);
	//REARRANGE STACK A
	if (!pile->len_b
		|| (pile->len_b && pile->b[pile->max_index_b] < pile->a[pile->min_index]))
		ft_get_best_rot_A(pile, pile->min_index);
	else
		ft_get_best_rot_A(pile, pile->med_index);
	//REARRANGE STACK B
	ft_get_best_rot_B(pile, pile->max_index_b);
	// ft_print_piles(pile);

	//FUSION
	while (pile->len_b)
	{
		ft_putstr("pa\n");
		ft_pa(pile);
	}
	ft_get_min_index(pile);
	// MIN_INDEX;
	ft_get_best_rot_A(pile, pile->min_index);
	// ft_print_piles(pile);
}