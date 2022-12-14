/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 21:33:08 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/21 21:45:39 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int ch)
{
	if ((ch >= 32) && (ch <= 126))
		return (1);
	return (0);
}
