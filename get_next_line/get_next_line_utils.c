/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 11:55:57 by gulwyck           #+#    #+#             */
/*   Updated: 2022/03/05 11:56:11 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_free(char **str)
{
	if (*str != NULL && str != NULL)
	{
		free(*str);
		*str = NULL;
	}
}
//
//size_t	ft_strlen(const char *str)
//{
//	size_t	i;
//
//	i = 0;
//	while (*str++)
//		i++;
//	return (i);
//}
//
//char	*ft_strjoin(const char *s, const char *d)
//{
//	int		i;
//	char	*dst;
//
//	i = 0;
//	if (!s || !d)
//		return (NULL);
//	dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + ft_strlen(d) + 1));
//	if (!dst)
//		return (NULL);
//	while (*s)
//		dst[i++] = *s++;
//	while (*d)
//		dst[i++] = *d++;
//	dst[i] = '\0';
//	return (dst);
//}
//
//char	*ft_strchr(const char *str, int n)
//{
//	char	*s;
//
//	s = (char *) str;
//	while (*s)
//	{
//		if (*s == n)
//			return (s);
//		s++;
//	}
//	if (n == 0)
//		return (s);
//	return (NULL);
//}
//
//char	*ft_strdup(const char *src)
//{
//	char	*dst;
//	size_t	len_src;
//	size_t	len_dst;
//
//	len_src = ft_strlen(src);
//	len_dst = 0;
//	dst = (char *)malloc(sizeof(char) * (len_src + 1));
//	if (!dst)
//		return (NULL);
//	while (len_dst < len_src && src[len_dst] != '\0')
//	{
//		dst[len_dst] = src[len_dst];
//		len_dst++;
//	}
//	dst[len_dst] = '\0';
//	return (dst);
//}
