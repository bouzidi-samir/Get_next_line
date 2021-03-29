/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 10:33:15 by sbouzidi          #+#    #+#             */
/*   Updated: 2021/03/29 14:20:53 by sbouzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int	i;
	int len;

	str = (char *) s1;
	i = 0;
	while (ft_strchr(set, str[i]))
	{
		i++;	
	}
	len = ft_strlen(str);
	while (ft_strchr(set, str[len + (i - 1)]))
	{
		len--;
	}

return (ft_substr(str,i,len));
}
