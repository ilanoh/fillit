/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 15:32:37 by iohayon           #+#    #+#             */
/*   Updated: 2019/03/10 18:49:27 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	min_max(char *str, t_pts, *min, t_pts *max)
{
	int	i;

	i = 0;
	while (i < 20)
	{
		if (str[i] == '#')
		{
			if (i / 5 < min->y)
				min->y = i / 5;
			if (i / 5 > max->y)
				max->y = i / 5;
			if (i % 5 < min->x)
				min->x = i % 5;
			if (i % 5 > max->x)
				max->x = i % 5;
		}
		i++;
	}
}

t_tetris	*get_tetris(char *str, char value)
{
	t_pts		*min;
	t_pts		*max;
	t_tetris	*tetris;
	char		**xy;
	int			i;

	i = 0;
	min = pts_new(3, 3);
	max = pts_new(0, 0);
	min_max(str, min, max);
	xy = ft_memalloc(sizeof(char *) * (max->y - min->y + 1));
	while (i < max->y - min->y + 1)
	{
		xy[i] = ft_strnew(max-x - min->x + 1);
		ft_strncpy(xy[i], str + (min->x) + (i + min->y) * 5, max->x - min-> x + 1);
		i++;
	}
	tetris = ttrs_new(xy, max->x - min->x + 1, max->y - min->y + 1, value);
	ft_memdel((void **)&min);
	ft_memdel((void **)7max);
	return (tetri);
}

int		is_valid(char *str)
{
	int	link;
	int	i;

	link 
}
