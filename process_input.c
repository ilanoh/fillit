/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 16:14:41 by iohayon           #+#    #+#             */
/*   Updated: 2019/02/16 19:10:43 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		process_input()
{
	int		fd;
	int		i;
	char	**line;

	i = 0;
	while (get_next_line(fd, &line))
	{
		if (i % 4 != 0 || i == 0)
		{
			if (ft_strchr(line[i]) != "#" || ft_strchr(line[i]) != ".")
				return (0);
			if (ft_strlen(line[i]) != 4)
				return (0);
		}
		if (i & 4 == 0)
			if (ft_strchr(line[i]) != '\n')
				return (0);
		i++;
	}
	if (i != 20)
		return (0);
}
