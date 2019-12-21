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

void	ft_sort_stack(t_piles *pile)
{
	int	sorted_pos_b;

	ft_get_med(pile);
	while (pile->a[pile->len_b] < pile->med)
	{
		sorted_pos_b = ft_get_sorted_pos_B(pile);
		if (sorted_pos_b == 0)
		{
			ft_putstr("pb\n");
			ft_pb(pile);
		}
		else if (sorted_pos_b == 1)
		{
			ft_putstr("rb\n");
			ft_rb(pile);
			ft_putstr("pb\n");
			ft_pb(pile);
		}
		else if (sorted_pos_b > 1)
		{
			// Rotate ou Reverse rotate B 
		}
		
		if (pile->len_b == 2 && !ft_check_sort(pile, 1))
		{
			ft_putstr("sb\n");
			ft_sb(pile);	
		}
	}
}