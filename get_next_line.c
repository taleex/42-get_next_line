/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 10:45:14 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/15 13:37:52 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_buffer_join(char *buf, int fd)
{

}
char	*get_next_line(int fd)
{
	static char *buf;
	char *temp;
	int by_r;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buf = ft_buffer_join(buf, fd);
	if (!buf)
		return (NULL);

	return (buf);

}
