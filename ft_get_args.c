/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoloma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:27:36 by dcoloma           #+#    #+#             */
/*   Updated: 2020/01/21 18:27:40 by dcoloma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_get_args(int ac, char **av, char ***args)
{
	int		i;
	char	**tmp1;
	char	**tmp2;

	if (ac < 2)
		return (INVALID);
	*args = ft_strsplit(av[1], ' ');
	if (*args == NULL)
		return (INVALID);
	i = 2;
	while (i < ac && av[i])
	{
		tmp1 = *args;
		tmp2 = ft_strsplit(av[i], ' ');
		*args = ft_tabjoin(tmp1, tmp2);
		ft_free_tab(tmp1);
		ft_free_tab(tmp2);
		if (*args == NULL)
			return (INVALID);
		i++;
	}
	return (VALID);
}
