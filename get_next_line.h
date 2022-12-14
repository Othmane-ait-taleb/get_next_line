/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 12:44:22 by otait-ta          #+#    #+#             */
/*   Updated: 2022/11/04 14:06:28 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
size_t	ft_gnl_strlen(const char *s);
char	*ft_gnl_strjoin(char *s1, char *s2);
char	*find_new_line(int fd, char *line);
char	*get_new_line(char *str);
char	*find_rest(char *str);
#endif