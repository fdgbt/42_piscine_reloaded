/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:14:29 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/09 18:14:44 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = 1;
	result = 1;
	if ((nb >= 0) && (nb <= 12))
	{
		while (i <= nb)
		{
			result = result * i;
			i++;
		}
		return (result);
	}
	else
		return (0);
}
