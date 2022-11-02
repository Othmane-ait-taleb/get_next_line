/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:06:25 by otait-ta          #+#    #+#             */
/*   Updated: 2022/10/30 14:28:25 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s2;

	s2 = (char *)s;
	i = 0;
	c = (char)c;
	if (c == '\0')
	{
		while (s2[i])
			i++;
		return (s2 + i);
	}
	else
		while (*s2 != c && *s2)
			s2++;
	if (!*s2)
		return (0);
	return (s2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*__substr;
	size_t	i;
	int		size;

	i = 0;
	if (s == 0 || len < 0)
		return (0);
	if (start >= ft_strlen(s) && *s)
		return (ft_strdup(""));
	if (len < ft_strlen(s))
		size = len + 1;
	else
		size = ft_strlen((s + start) + 1);
	__substr = malloc((size) * sizeof(char));
	if (!__substr)
		return (0);
	while (i < ft_strlen(s) && i < len)
		__substr[i++] = s[start++];
	__substr[i] = '\0';
	return (__substr);
}

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*__p;
	int		i;

	i = 0;
	size = ft_strlen(s1) + 1;
	__p = malloc(size * sizeof(char));
	if (!__p)
		return (0);
	while (s1[i])
	{
		__p[i] = s1[i];
		i++;
	}
	__p[i] = '\0';
	return (__p);
}

size_t	ft_strlen(const char *s)
{
	int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t_size;
	char	*__rtr;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	t_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	__rtr = malloc(t_size * sizeof(char));
	if (__rtr == NULL)
		return (NULL);
	while (s1[i])
	{
		__rtr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		__rtr[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	__rtr[ft_strlen(s1) + i] = '\0';
	return (__rtr);
}
