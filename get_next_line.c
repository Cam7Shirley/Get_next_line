/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshirley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 10:23:14 by cshirley          #+#    #+#             */
/*   Updated: 2018/06/07 13:08:15 by cshirley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	int		ret;
	size_t	size;
	char	*temp;

	ret = 0;
	size = read(fd, temp, BUFF_SIZE);
	while (temp[index] != '\0' && temp[index] != '\n')
}
