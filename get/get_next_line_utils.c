/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzidi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 07:25:29 by sbouzidi          #+#    #+#             */
/*   Updated: 2021/04/07 13:42:54 by sbouzidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_locate_line(char *buf, int curseur)
{
	int n;

	n = 0;
	while (buf[curseur] != '\n')
	{
		n++;
	}
	return (n);
}
