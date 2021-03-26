/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:16:17 by sbouzidi          #+#    #+#             */
/*   Updated: 2021/03/24 14:34:37 by sbouzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	void	*s;	
	size_t	i;

	if (count == 0 || size == 0)
		return (NULL);
	i = 0;
	str = malloc(sizeof(char) * size);
	while (i < count)
	{
		str[i] = 0;
		i++;
	}
	s = str;
	return (s);
}
