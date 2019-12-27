#include "push_swap.h"

int	ft_get_max_index(t_piles *pile)
{
	int i;
	int	max;

	i = pile->len_b + 1;
	max = pile->a[pile->len_b];
	pile->max_index = pile->len_b;
	while (i < pile->len)
	{
		if (pile->a[i] > max)
		{
			pile->max_index = i;
			max = pile->a[i];
		}
		i++;
	}
}