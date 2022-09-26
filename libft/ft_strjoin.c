/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 19:17:23 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/25 18:16:09 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s, const char *d)
{
	int		i;
	char	*dst;

	i = 0;
	if (!s || !d)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + ft_strlen(d) + 1));
	if (!dst)
		return (NULL);
	while (*s)
		dst[i++] = *s++;
	while (*d)
		dst[i++] = *d++;
	dst[i] = '\0';
	return (dst);
}
