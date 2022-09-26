/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:39:37 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/25 10:51:12 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s, const void *d, size_t n)
{
	unsigned char	*s_new;
	unsigned char	*d_new;

	s_new = (unsigned char *)s;
	d_new = (unsigned char *)d;
	while (n && (*s_new == *d_new))
	{
		s_new++;
		d_new++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s_new - *d_new);
}
