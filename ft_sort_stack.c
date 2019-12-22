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

void 	t_get_best_rot(t_piles *pile, int pos)
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
		ft_get_best_rot(pile, sorted_pos_b);
		ft_putstr("pb\n");
		ft_pb(pile);
	}
}

void	ft_sort_right(t_piles *pile)
{
	
}

void	ft_sort_stack(t_piles *pile)
{

	ft_get_med(pile);
	while (pile->len != 0 || !ft_check_sort(pile, 0))//(pile->a[pile->len_b] < pile->med)
	{
		if (pile->a[pile->len_b] < pile->med)
			ft_sort_left(pile);
		else
		{
			ft_sort_right(pile);
		}
		
		if (pile->len_b == 2 && !ft_check_sort(pile, 1))
		{
			ft_putstr("sb\n");
			ft_sb(pile);	
		}
	}
}