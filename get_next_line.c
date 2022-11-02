/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:00:06 by marvin            #+#    #+#             */
/*   Updated: 2022/11/02 15:00:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *get_line(int fd, char *line)
{
    char	*temp;
    char	*buff;
    int		rtr;

    buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		{
			if (line)
				free(line);
			line = NULL;
			return (NULL);
		}
    rtr = 69;
    while (rtr != 0 && !ft_strchr(line, '\n'))
    {
		rtr = read(fd, buff, BUFFER_SIZE);
		if (rtr < 0)
			{
				free(buff);
				if (line)
					free(line);
				return(NULL);
			}
		buff[rtr] = '\0';
		//watch out the free
		temp = line;
		line = ft_strjoin(line, buff);
		free(temp);
    }  
	return (free(buff), line);      
}

char	*get_next_line(int fd)
{
	static char *line;
	int			new_line_index;
	char		*to_free;
	char		*temp;
	
	line = get_line(fd, line);
	if (line == NULL)
		return (NULL);
	if (!ft_strchr(line,'\n'))
		{
			temp = ft_strdup(line);
			return (free(line),temp);
		}
	new_line_index = ft_strchr(line , '\n') - line;
	temp = ft_substr(line, 0,new_line_index + 1);
	to_free = line;
	line = ft_substr(line, new_line_index + 1, ft_strlen(line));
	return (free(to_free),temp);
}