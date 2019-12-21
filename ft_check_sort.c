#include "push_swap.h"

int		ft_check_sort(t_piles *pile, int desc)
{
	int	i;

	if (!desc)
	{
		i = pile->len_b + 1;
		while (i < pile->len)
		{
			if (pile->a[i - 1] > pile->a[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = pile->len - pile->len_b + 1;
		while (i < pile->len)
		{
			if (pile->b[i - 1] < pile->b[i])
				return (0);
			i++;
		}
		return (1);
	}
}
