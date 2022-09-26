/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:15:04 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/25 10:30:57 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*dst;

	dst = (char *)malloc(n * size);
	if (!dst)
		return (NULL);
	ft_memset(dst, 0, (n * size));
	return (dst);
}
