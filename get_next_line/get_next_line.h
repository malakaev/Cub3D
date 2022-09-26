/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:55:39 by gulwyck           #+#    #+#             */
/*   Updated: 2022/03/05 11:55:41 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include "../libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

//size_t	ft_strlen(const char *str);
//char	*ft_strjoin(const char *s, const char *d);
//char	*ft_strchr(const char *str, int n);
//char	*ft_strdup(const char *src);
int		get_next_line(int fd, char **line);
void	ft_free(char **str);

#endif
