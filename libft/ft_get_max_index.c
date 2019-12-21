#include "libft.h"

int	ft_get_max_index(int *tab, int len)
{
	int i;
	int	max;
	int	index;

	i = 1;
	index = 0;
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
		{
			index = i;
			max = tab[i];
		}
		i++;
	}
	return (index);
}