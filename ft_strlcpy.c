/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:40:43 by vly               #+#    #+#             */
/*   Updated: 2022/02/26 18:02:59 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
		{
			i++;
		}
		return (i);
	}
	while (src[i] && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < dstsize)
	{
		dest[i] = '\0';
	}
	while (src[i])
	{
		i++;
	}
	return (i);
}
