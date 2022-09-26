/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:16:11 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/25 11:12:21 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	char	*s;

	s = (char *)str;
	while (*s)
		s++;
	if (n == 0)
		return (s);
	while (s != str)
	{
		if (*s == n)
			return (s);
		s--;
	}
	if (*s == n)
		return (s);
	return (NULL);
}
