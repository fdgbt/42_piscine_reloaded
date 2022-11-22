/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:04:06 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/09 20:46:19 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void	ft_print_params(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char **argv)
{
	int		index;
	char	*temp;

	index = 1;
	temp = NULL;
	if (argc == 2)
		ft_print_params(argv[1]);
	else
	{
		while (index < argc - 1)
		{
			if (ft_strcmp(argv[index], argv[index + 1]) > 0)
			{
				temp = argv[index];
				argv[index] = argv[index + 1];
				argv[index + 1] = temp;
				index = 0;
			}
			index++;
		}
		index = 0;
		while (++index < argc)
			ft_print_params(argv[index]);
	}
	return (0);
}
