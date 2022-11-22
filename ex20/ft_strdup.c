/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:05:47 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/09 19:27:23 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*temp;
	int		size;

	dup = NULL;
	temp = src;
	size = 0;
	while (*src != '\0')
	{
		size++;
		src++;
	}
	if (!(dup = (char*)malloc(sizeof(*dup) * (size + 1))))
		return (0);
	src = temp;
	while (*src != '\0')
	{
		*dup = *src;
		dup++;
		src++;
	}
	*dup = '\0';
	return (dup - size);
}
