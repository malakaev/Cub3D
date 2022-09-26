/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:38:25 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/25 10:52:35 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_new;
	unsigned char	*src_new;

	dest_new = (unsigned char *)dest;
	src_new = (unsigned char *)src;
	if (!dest_new && !src_new)
		return (NULL);
	if (dest > src)
		while (n--)
			*(dest_new + n) = *(src_new + n);
	else
		while (n--)
			*dest_new++ = *src_new++;
	return (dest);
}
