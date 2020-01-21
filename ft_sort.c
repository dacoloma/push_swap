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

static int	ft_partition(t_quicksort *quick, int pivot, int left, int right)
{
	int	right_ptr;

	right_ptr = right - 1;
	while (1)
	{
		while (left < quick->len && quick->tab[left] < pivot)
			left++;
		while (right_ptr < quick->len && right_ptr > 0
			&& quick->tab[right_ptr] > pivot)
			right_ptr--;
		if (left >= right_ptr)
			break ;
		else
			ft_swap(&(quick->tab[left]), &(quick->tab[right_ptr]));
	}
	ft_swap(&(quick->tab[left]), &(quick->tab[right]));
	return (left);
}

static void	ft_quick_sort(t_quicksort *quick, int left, int right)
{
	int	pivot;
	int	partition;

	if (right - left <= 0)
		return ;
	pivot = quick->tab[right];
	partition = ft_partition(quick, pivot, left, right);
	ft_quick_sort(quick, left, partition - 1);
	ft_quick_sort(quick, partition + 1, right);
}

static int	*ft_tabdup(int *tab, int len)
{
	int	*dup;
	int i;

	dup = (int *)malloc(sizeof(int) * len);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = tab[i];
		i++;
	}
	return (dup);
}

t_quicksort	*ft_sort(t_piles *pile, int sort)
{
	t_quicksort	*quick;

	quick = (t_quicksort *)malloc(sizeof(t_quicksort));
	if (quick == NULL)
		return (NULL);
	quick->tab = ft_tabdup(pile->a, pile->len);
	if (quick->tab == NULL)
	{
		free(quick);
		return (NULL);
	}
	quick->len = pile->len;
	if (sort == QUICK_SORT)
		ft_quick_sort(quick, 0, quick->len - 1);
	return (quick);
}
