/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:24:43 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/25 10:47:41 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_new;
	unsigned char	*src_new;

	dest_new = (unsigned char *) dest;
	src_new = (unsigned char *) src;
	while (n > 0)
	{
		*dest_new = *src_new;
		if (*src_new == (unsigned char) c)
		{
			return (++dest);
		}
		dest_new++;
		src_new++;
		dest++;
		n--;
	}
	return (NULL);
}
