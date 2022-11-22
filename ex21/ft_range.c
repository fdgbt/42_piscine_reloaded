/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:47:50 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/09 19:49:50 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int index;

	tab = NULL;
	index = max - min - 1;
	if (min <= max)
	{
		if (!(tab = malloc(sizeof(*tab) * index)))
			return (0);
		index = 0;
		while ((min + index) < max)
		{
			tab[index] = min + index;
			index++;
		}
	}
	return (tab);
}
