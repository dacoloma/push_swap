#include "push_swap.h"

void	ft_short_stack(t_piles *pile)
{
	while (!ft_check_sort(pile, ASC))
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
	
}

void	ft_sort_right(t_piles *pile)
{
	int	sorted_pos_a;

	sorted_pos_a = ft_get_sorted_pos_A(pile);
	
}

void	ft_sort_stack(t_piles *pile)
{
	if (pile->len <= 3)
	{
		ft_short_stack(pile);
		return ;
	}
	// while (count > 0 && (!ft_check_sort(pile, 0) || !ft_check_sort(pile, 1)))
	while (!ft_check_sort(pile, 0) || !ft_check_sort(pile, 1))//(pile->a[pile->len_b] < pile->med)
	{
		if (pile->a[pile->len_b] < pile->med)
			ft_sort_left(pile);
		else
			ft_sort_right(pile);
		// count--;
		// DEBUG;
	}
}