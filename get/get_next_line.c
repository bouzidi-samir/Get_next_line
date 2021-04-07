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

int	get_next_line(int fd, char **line)
{
	static int	curseur = 0;
	int	n;
	char	*str;
	char	*trash;

	n = 0;
	n = ft_locate_line(*line, curseur);	
	if (n <= BUFFER_SIZE)
	{		
		str = malloc(sizeof(char) * n + 1);
		if (!str)
			return (0);			
			while (curseur != 0 && curseur <= n)
				curseur = read(fd, str, n);
		str[curseur + 1] = '\0';
		trash = malloc(sizeof(char) * 1);
		curseur = read(fd, trash, 1);
	}
	else
	{	
		str = malloc(sizeof(char) * BUFFER_SIZE + 1);	
		if (!str)
			return (0);
		while (curseur != 0 && curseur <= BUFFER_SIZE)
			curseur = read(fd, str, BUFFER_SIZE);
		str[curseur + 1] = '\0';
		trash = malloc(sizeof(char) * ft_locate_line(*line, curseur) + 1);
		curseur = read(fd, trash, ft_locate_line(*line, curseur) + 1);
	}


	return (curseur);
}
int main()
{
	int fd;
	char **tab;

	tab = 0;	
	fd = open("test.txt", O_RDONLY);
	printf("%d" "\n", fd);
	printf("%d",get_next_line(fd,tab));


	return(0);
}









