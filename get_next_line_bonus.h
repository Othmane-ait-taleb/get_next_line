/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otait-ta <otait-ta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:58:18 by otait-ta          #+#    #+#             */
/*   Updated: 2022/11/04 14:06:02 by otait-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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