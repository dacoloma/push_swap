#include "push_swap.h"

void	ft_get_med(t_piles *pile)
{
	t_quicksort quick;
	int			i;

	quick = ft_sort(pile, QUICK_SORT);
	pile->med = quick.tab[quick.len / 2];
	i = 0;
	while (pile->a[i] && pile->a[i] != pile->med)
	{
		i++;
	}
	pile->med_index = i;
	free(quick.tab);
	// printf("med = %d\nindex = %d\n", pile->med, pile->med_index);
	// fflush(stdout);
}