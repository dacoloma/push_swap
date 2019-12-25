#include "push_swap.h"

int		ft_get_sorted_pos_B(t_piles *pile)
{
	int	i;
	int	j;
	int	count;

	i = pile->len_b;
	count = pile->len_b;
	j = pile->limit_b;
	// MAX_B;
	if (pile->len_b > 0)
	{
		while (count != 0 && pile->a[i] < pile->b[j])
		{
			j++;
			count--;
			if (j == pile->len)
				j = pile->len - pile->len_b;
		}
	}
	return (j);
}

int		ft_get_sorted_pos_A(t_piles *pile)
{
	int	i;
	int	j;

	i = pile->len_b;
	// LEN;
	// LEN_B;
	if (pile->med_index + 1 == pile->len)
		j = pile->len_b;
	else
		j = pile->med_index + 1;
	// printf("a[%d] = %d\n", i, pile->a[i]);
	// fflush(stdout);
	// printf("a[%d] = %d\n", j, pile->a[j]);
	// fflush(stdout);
	while (pile->a[i] > pile->a[j] && pile->a[j] > pile->med)
	{
		j++;
		if (j == pile->len)
			j = pile->len_b;
	}
	return (j);
}

void 	ft_get_best_rot_B(t_piles *pile, int pos)
{
	int	i;
	int	limit;

	i = 0;
	if (pos > pile->len - pile->len_b / 2)
	{
		limit = pile->len - pos;
		while (i < limit)
		{
			ft_putstr("rrb\n");
			ft_rrb(pile);
			i++;
		}
	}
	else
	{
		limit = pos - (pile->len - pile->len_b);
		while (i < limit)
		{
			ft_putstr("rb\n");
			ft_rb(pile);
			i++;
		}
	}
}

void 	ft_get_best_rot_A(t_piles *pile, int pos)
{
	int	i;
	int	limit;

	i = 0;
	if (pos > (pile->len + pile->len_b) / 2)
	{
		limit = pile->len - pos;
		while (i < limit)
		{
			ft_putstr("rra\n");
			ft_rra(pile);
			i++;
		}
	}
	else
	{
		limit = pos - pile->len_b;
		while (i < limit)
		{
			ft_putstr("ra\n");
			ft_ra(pile);
			i++;
		}
	}
}

void	ft_sort_left(t_piles *pile)
{
	int	sorted_pos_b;
	
	sorted_pos_b = ft_get_sorted_pos_B(pile);
	// POS_B;
	if (sorted_pos_b < 1)
	{
		ft_putstr("pb\n");
		ft_pb(pile);
	}
	else
	{
		// Rotate ou Reverse rotate B
		ft_get_best_rot_B(pile, sorted_pos_b);
		ft_putstr("pb\n");
		ft_pb(pile);
	}
}

void	ft_sort_right(t_piles *pile)
{
	int	sorted_pos_a;

	sorted_pos_a = ft_get_sorted_pos_A(pile);
	// ft_print_piles(pile);
	// POS_A;
	if (sorted_pos_a == pile->len_b)
	{
		ft_putstr("ra\n");
		ft_ra(pile);
	}
	else if (sorted_pos_a == pile->len_b + 1)
	{
		ft_putstr("sa\n");
		ft_sa(pile);
		if (!ft_check_sort(pile, 0))
		{
			ft_putstr("ra\n");
			ft_ra(pile);
			ft_putstr("ra\n");
			ft_ra(pile);
		}
	}
	
	else if (sorted_pos_a > pile->len_b + 2 && sorted_pos_a < pile->len - 1)
	{
		ft_putstr("pb\n");
		ft_pb(pile);
		ft_get_best_rot_A(pile, sorted_pos_a - 1);
		ft_putstr("pa\n");
		ft_pa(pile);
	}
	else if (sorted_pos_a == pile->len - 1)
	{
		ft_putstr("rra\n");
		ft_rra(pile);
		ft_putstr("sa\n");
		ft_sa(pile);
		// DEBUG;
		if (!ft_check_sort(pile, 0))
		{
			ft_putstr("ra\n");
			ft_ra(pile);
			ft_putstr("ra\n");
			ft_ra(pile);
		}
	}
	else if (sorted_pos_a == pile->len_b + 2)
	{
		ft_putstr("sa\n");
		ft_sa(pile);
		ft_putstr("ra\n");
		ft_ra(pile);
		ft_putstr("ra\n");
		ft_ra(pile);
	}
}

void	ft_sort_stack(t_piles *pile)
{
	int 	count;

	count = pile->len - 1;
	ft_get_med(pile);
	// ft_putstr("START\n");
	// DEBUG;
	// MED;

	while (count > 0 && (!ft_check_sort(pile, 0) || !ft_check_sort(pile, 1)))
	// while (!ft_check_sort(pile, 0) || !ft_check_sort(pile, 1))//(pile->a[pile->len_b] < pile->med)
	{
		if (pile->a[pile->len_b] < pile->med)
			ft_sort_left(pile);
		else
			ft_sort_right(pile);
		count--;
		// DEBUG;
	}
	// ft_putstr("STEP 1\n");
	// DEBUG;

	//Rearrange stack A
	if (!pile->len_b)
		pile->med_index = pile->i_min;
	if (pile->med_index <= (pile->len + pile->len_b) / 2)
	{
		// printf("index: %d\n", pile->med_index);
		// fflush(stdout);
		// LEN_B;
		while (pile->med_index != pile->len_b)
		{
			ft_putstr("ra\n");
			ft_ra(pile);
		}
	}
	else
	{
		while (pile->med_index != pile->len_b)
		{
			ft_putstr("rra\n");
			ft_rra(pile);
		}
	}
	// ft_putstr("STEP 2\n");
	// DEBUG;
	// MAX_B;
	//Rearrange stack B
	if (pile->len_b)
	{
		if (pile->limit_b <= pile->len - pile->len_b / 2)
		{
			while (pile->limit_b != pile->len - pile->len_b)
			{
				ft_putstr("rb\n");
				ft_rb(pile);
			}
		}
		else
		{
			while (pile->limit_b != pile->len - pile->len_b)
			{
				ft_putstr("rrb\n");
				ft_rrb(pile);
			}
		}
	}
	// ft_putstr("STEP 3\n");
	// DEBUG;
	while (pile->len_b)
	{
		ft_putstr("pa\n");
		ft_pa(pile);
	}
	// ft_putstr("STEP 4\n");
	// DEBUG;
	/*
*/
}