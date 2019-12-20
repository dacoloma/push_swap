/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 15:54:40 by dcoloma           #+#    #+#             */
/*   Updated: 2019/12/12 15:54:48 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*ft_partition(t_quicksort *quick, int pivot)
{
	int	left_ptr;
	int	right_ptr;

	left_ptr = quick->left;
	right_ptr = quick->right - 1;
	while (1)
	{
		while (quick->tab[left_ptr] < pivot)
			left_ptr++;
		while (right_ptr > 0 && quick->tab[right_ptr] > pivot)
			right_ptr--;
		if (left_ptr >= right_ptr)
        	break;
		else                
        	ft_swap(&(quick->tab[left_ptr]),&(quick->tab[right_ptr]));
	}
}	

static void	ft_quick_sort(t_quicksort *quick)
{
	int	pivot;

	if (quick->right - quick->left <= 0)
		return ;
	pivot = quick->tab[quick->right];

}

static int	*ft_tabdup(int *tab, int len)
{
	int	*dup;
	int i;

	if (!(dup = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = tab[i];
		i++;
	}
	return (tab);
}

void		ft_sort(t_pile *pile)
{
	t_quicksort	quick;

	quick.tab = ft_tabdup(pile->a, pile->len);
	quick.len = pile->len;
	quick.pivot = quick.len - 1;
	quick.left = 0;
	quick.right = quick.len - 1;
	if (sort == QUICK_SORT)
		ft_quick_sort(&quick);
}
