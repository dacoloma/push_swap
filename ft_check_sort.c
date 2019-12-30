#include "push_swap.h"

int		ft_check_sort(t_piles *pile)
{
	int	i;
	int	j;
	int	count;

	ft_get_min_index(pile);
	if (pile->len_b && pile->b[pile->max_index_b] > pile->a[pile->min_index])
		return (0);
	count = pile->len - pile->len_b - 1;
	i = (pile->min_index + 1 < pile->len) ? pile->min_index + 1 : pile->len_b;
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
