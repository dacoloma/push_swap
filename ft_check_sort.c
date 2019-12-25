#include "push_swap.h"

int		ft_check_sort(t_piles *pile, int desc)
{
	int	i;
	int	j;
	int	count;

	if (!desc)
	{
		// i = pile->len_b + 1;
		pile->i_min = ft_get_min_index(pile->a, pile->len);
		count = pile->len - pile->len_b - 1;
		if (pile->len_b)
			i = (pile->med_index + 1 < pile->len) ? pile->med_index + 1 : pile->len_b;
		else
			i = (pile->i_min + 1 < pile->len) ? pile->i_min + 1 : pile->len_b;
		// while (i < pile->len)
		// LEN_B;
		// MED;
		// printf("i_min = %d\n", pile->i_min);
		// fflush(stdout);
		while (count > 0)
		{
			j = (i - 1 < pile->len_b) ? pile->len - 1 : i - 1;
			if (pile->a[j] > pile->a[i])
				return (0);
			i++;
			if (i == pile->len)
				i = pile->len_b;
			count--;
		}
		return (1);
	}
	else
	{
		if (pile->len_b)
		{
			i = pile->len - pile->len_b + 1;
			while (i < pile->len)
			{
				if (pile->b[i - 1] < pile->b[i])
					return (0);
				i++;
			}
		}
		return (1);
	}
}
