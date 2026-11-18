/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgferr <jorgferr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 10:43:53 by jorgferr          #+#    #+#             */
/*   Updated: 2026/11/15 13:13:39 by jorgferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	int	len;

	if (!s)
		return (NULL);
	len = 0;
	while (s[len])
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		len++;
	}
	if ((char)c == '\0')
		return ((char *)s + len);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sizetotal;
	char	*res;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	sizetotal = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizetotal + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[sizetotal] = '\0';
	return (res);
}
