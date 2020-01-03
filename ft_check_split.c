#include "push_swap.h"

int	ft_check_split(t_piles *pile)
{
	int	i;

	i = pile->len_b;
	while (pile->a[i] >= pile->med)
		i++;
	if (i != pile->len)
		return (0);
	return (1);
}