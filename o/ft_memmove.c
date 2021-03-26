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
	char	*x;
	char	*y;

	x = (char *)dst;
	y = (char *)src;
	if (dst == src)
		return (dst);
	if (y < x)
	{
		while (len--)
			*(x + len) = *(y + len);
		return (dst);
	}
	while (len--)
		*x++ = *y++;
	return (dst);
}
