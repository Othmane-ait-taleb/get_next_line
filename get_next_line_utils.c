/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:06:25 by otait-ta          #+#    #+#             */
/*   Updated: 2022/11/04 14:06:28 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
	{
		i = ft_gnl_strlen(s);
		return ((char *)&s[i]);
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

size_t	ft_gnl_strlen(const char *s)
{
	size_t	l;

	if (!s)
		return (0);
	l = 0;
	while (s[l])
		l++;
	return (l);
}

char	*ft_gnl_strjoin(char *s1, char *s2)
{
	size_t	t_size;
	char	*__rtr;
	size_t	i;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		*s1 = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	t_size = ft_gnl_strlen(s1) + ft_gnl_strlen(s2) + 1;
	__rtr = malloc(t_size * sizeof(char));
	if (__rtr == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		__rtr[i] = s1[i];
	i = -1;
	while (s2[++i])
		__rtr[ft_gnl_strlen(s1) + i] = s2[i];
	__rtr[ft_gnl_strlen(s1) + i] = '\0';
	return (free(s1), __rtr);
}
