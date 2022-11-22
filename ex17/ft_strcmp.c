/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:50:46 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/09 18:50:59 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
