/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:50:38 by vly               #+#    #+#             */
/*   Updated: 2022/03/17 19:49:11 by vly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122) || (i >= 48 && i <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
