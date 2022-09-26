/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:31:07 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/25 11:13:00 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	char	*d;
	size_t	i;

	d = NULL;
	if (s && set)
	{
		while (*s && ft_strchr(set, *s))
			s++;
		i = ft_strlen(s);
		while (i && ft_strchr(set, s[i]))
			i--;
		d = ft_substr(s, 0, i + 1);
	}
	return (d);
}
