/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 09:07:18 by sbouzidi          #+#    #+#             */
/*   Updated: 2021/03/22 12:18:14 by sbouzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*x;
	char	*y;
	
	i = 0;
	x = (char *)dst;
	y = (char *)src;
	if (x > y)
	{
		while (i < len)
		{
			x[len - 1] = y[len - 1];
			len --;
		}	
	}
	else
	{
		while (i < len)
		{
			x[i] = y[i];
			i++;
		}
	}
	return (dst);
}
