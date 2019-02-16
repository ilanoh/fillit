/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 16:14:41 by iohayon           #+#    #+#             */
/*   Updated: 2019/02/03 16:25:11 by iohayon          ###   ########.fr       */
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
		if (ft_strchr(line[i]) != "#" || ft_strchr(line[i]) != ".")
			return (0);
	}
}
