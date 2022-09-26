/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 14:38:45 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/25 11:03:26 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = 0;
	dst = (char *)malloc(sizeof(char) * (len_src + 1));
	if (!dst)
		return (NULL);
	while (len_dst < len_src && src[len_dst] != '\0')
	{
		dst[len_dst] = src[len_dst];
		len_dst++;
	}
	dst[len_dst] = '\0';
	return (dst);
}
