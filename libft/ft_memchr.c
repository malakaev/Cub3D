/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:28:09 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/25 10:50:00 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str_new;

	str_new = (unsigned char *)str;
	while (n--)
	{
		if (*str_new == (unsigned char)c)
			return (str_new);
		str_new++;
	}
	return (NULL);
}
