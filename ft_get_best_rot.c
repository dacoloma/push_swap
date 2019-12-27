#include "push_swap.h"

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
