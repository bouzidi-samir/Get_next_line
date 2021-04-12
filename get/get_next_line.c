/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 07:24:57 by sbouzidi          #+#    #+#             */
/*   Updated: 2021/04/07 13:55:05 by sbouzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_locate_line(char *str, char **line, int r)
{
	char			*stock;
	unsigned int	n;

	n = 0;
	while (str[n])
	{
		if (str[n] == '\n')
			break ;
		n++;
	}
	if (n < ft_strlen(str))
	{
		*line = ft_substr(str, 0, n);
		stock = ft_substr(str, n + 1, ft_strlen(str));
		free(str);
		str = ft_strdup(stock);
		free(stock);
	}
	else if (r == 0)
	{
		*line = str;
		str = NULL;
	}
	return (str);
}

char	*stock(char *buf, char *str)
{
	char	*stock;

	if (str)
	{
		stock = ft_strjoin(str, buf);
		free(str);
		str = ft_strdup(stock);
		free(stock);
	}
	else
		str = ft_strdup(buf);
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dest;
	int		size;
	int		i;
	int		j;

	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	size = ft_strlen(s1) + ft_strlen(s2);
	dest = malloc(sizeof(char) * size + 1);
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
	return (dest);
}

int	get_next_line(int fd, char **line)
{
	static char	*str[4096];
	char		buf[BUFFER_SIZE + 1];
	int			r;	

	if (fd < 0 || !line || BUFFER_SIZE < 1 || read(fd, buf, 0) < 0)
		return (-1);
	while ((r = read(fd, buf, BUFFER_SIZE)))
	{
		if (r == -1)
			return (-1);
		buf[r] = '\0';
		str[fd] = stock(buf, str[fd]);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (r <= 0 && !str[fd])
	{	
		*line = ft_strdup("");
		return (r);
	}
	str[fd] = ft_locate_line(str[fd], line, r);
	if (r <= 0 && !str[fd])
		return (r);
	return (1);
}
