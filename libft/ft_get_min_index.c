#include "libft.h"

int	ft_get_min_index(int *tab, int len)
{
	int i;
	int	min;
	int	index;

	i = 1;
	min = tab[0];
	index = 0;
	while (i < len)
	{
		if (tab[i] < min)
		{
			index = i;
			min = tab[i];
		}
		i++;
	}
	return (index);
}