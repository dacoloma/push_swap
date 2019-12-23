#include "push_swap.h"

int		ft_get_sorted_pos_B(t_piles *pile)
{
	int	i;
	int	j;

	i = pile->len_b;
	j = pile->len - pile->len_b;
	if (pile->len_b > 0)
	{
		while (j < pile->len && pile->a[i] < pile->b[j])
			j++;
	}
	return (j);
}

int		ft_get_sorted_pos_A(t_piles *pile)
{
	int	i;
	int	j;

	i = pile->len_b;
	j = pile->med_index + 1;
	while (j < pile->len && pile->a[i] < pile->a[j])
	{
		if (j == pile->len)
			j = 0;
		if (pile->a[j] < pile->med)
			break;
		j++;
	}
	if (j == pile->len)
		return (0);
	return (j);
}

void 	ft_get_best_rot_B(t_piles *pile, int pos)
{
	int	i;
	int	limit;

	i = 0;
	if (pos > (pile->len_b) / 2)
	{
		limit = pile->len_b - pos;
		while (i < limit)
		{
			ft_putstr("rrb\n");
			ft_rrb(pile);
			i++;
		}
	}
	else
	{
		while (i < pos)
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
	if (pos > (pile->len - pile->len_b) / 2)
	{
		limit = (pile->len - pile->len_b) - pos;
		while (i < limit)
		{
			ft_putstr("rra\n");
			ft_rra(pile);
			i++;
		}
	}
	else
	{
		while (i < pos)
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
	if (sorted_pos_a == 0)
	{
		ft_putstr("ra\n");
		ft_ra(pile);
	}
	if (sorted_pos_a < pile->len - 1)
	{
		ft_putstr("pb\n");
		ft_pb(pile);
		ft_get_best_rot_A(pile, sorted_pos_a - 1);
		ft_putstr("pa\n");
		ft_pa(pile);
	}
	else
	{
		ft_putstr("rra\n");
		ft_rra(pile);
		ft_putstr("sa\n");
		ft_sa(pile);
		ft_putstr("ra\n");
		ft_ra(pile);
	}
	
}

void	ft_sort_stack(t_piles *pile)
{

	ft_get_med(pile);
	while (!ft_check_sort(pile, 0) && !ft_check_sort(pile, 1))//(pile->a[pile->len_b] < pile->med)
	{
		if (pile->a[pile->len_b] < pile->med)
			ft_sort_left(pile);
		else
			ft_sort_right(pile);
		
		// if (pile->len_b == 2 && !ft_check_sort(pile, 1))
		// {
		// 	ft_putstr("sb\n");
		// 	ft_sb(pile);	
		// }
	}
	//get med_index = 0
	while (pile->len_b)
	{
		if (pile->med_index <= (pile->len - pile->len_b) / 2)
		{
			while (pile->med_index != 0)
			{
				ft_putstr("ra\n");
				ft_ra(pile);
			}
		}
		else
		{
			while (pile->med_index != 0)
			{
				ft_putstr("rra\n");
				ft_rra(pile);
			}
		}
		
	}

}