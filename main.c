/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 10:40:57 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/15 13:03:08 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>

int	main(void)
{
	int fd;
	char *line;
	size_t i;

	fd = open("test.txt", 0);
	if (fd == -1)
		return (1);
	i = 0;
	line = get_next_line(fd);
	while (line[i])
	{
		write(1, &line[i], 1);
		i++;
	}
	line[i] = '\0';

	printf("%zu",ft_strlen("hey"));
}
// cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c
