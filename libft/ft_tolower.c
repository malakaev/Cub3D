/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gulwyck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 21:38:04 by gulwyck           #+#    #+#             */
/*   Updated: 2021/04/21 21:41:43 by gulwyck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ch)
{
	if ((ch >= 'A') && (ch <= 'Z'))
		return (ch - 'A' + 'a');
	return (ch);
}
