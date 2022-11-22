/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdagbert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 20:13:07 by fdagbert          #+#    #+#             */
/*   Updated: 2017/11/09 20:18:50 by fdagbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buff[BUFF_SIZE];

	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			write(2, "File does not exist.\n", 21);
		else
		{
			while ((ret = read(fd, buff, BUFF_SIZE)))
				write(1, &buff, ret);
			if (close(fd) == -1)
				write(2, "Close failed.\n", 14);
		}
	}
	return (0);
}
