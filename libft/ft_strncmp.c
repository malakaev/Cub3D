/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_strncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 19:41:06 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/25 11:10:05 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_new;
	unsigned char	*s2_new;

	s1_new = (unsigned char *)s1;
	s2_new = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1_new[i] == s2_new[i] && i < n && (s1_new[i] || s2_new[i]))
	{
		if (s1_new[i] != s2_new[i])
			return (s1_new[i] - s2_new[i]);
		i++;
	}
	if (i != n)
		return (s1_new[i] - s2_new[i]);
	return (0);
}
