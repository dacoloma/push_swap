#include "push_swap.h"

void	ft_print_piles(t_piles *pile)
{
	int	i;

	printf("PILE_A:\t");
	fflush(stdout);
	i = 0;
	while (i < pile->len_b)
	{
		printf(".\t");
		fflush(stdout);
		i++;
	}
	while (i < pile->len)
	{
		printf("%d\t", (pile->a)[i++]);
		fflush(stdout);
	}
	printf("\nPILE_B:\t");
	fflush(stdout);
	i = 0;
	while (i < pile->len - pile->len_b)
	{
		printf(".\t");
		fflush(stdout);
		i++;
	}
	while (i < pile->len)
	{
		printf("%d\t", (pile->b)[i]);
		fflush(stdout);
		i++;
	}
	ft_putstr("\n\n");
}
