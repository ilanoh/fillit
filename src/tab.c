/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 12:47:52 by iohayon           #+#    #+#             */
/*   Updated: 2019/03/10 15:32:27 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	free_tab(t_tab *tab)
{
	int	i;

	i = 0;
	while (i < tab->size)
	{
		ft_memdel((void **)&(tab->table[i]));
		i++;
	}
	ft_memdel((void **)&(tab->table));
	ft_memdel((void **)&tab);
}

void	display(t_tab *tab)
{
	int	i;

	i = 0;
	while (i < tab->size)
	{
		ft_putstr(map->table[i]);
		ft_putchar('\n');
		i++;
	}
}

t_tab	*tab_new(int size)
{
	t_tab	*tab;
	int		i;
	int		j;

	tab = (t_tab *)ft_memalloc(sizeof(t_tab));
	tab->size = size;
	tab->table = (char **)ft_memalloc(sizeof(char *) * size);
	i = 0;
	while (i < size)
	{
		tab->table[i] = ft_strnew(size);
		j = 0;
		while (j < size)
		{
			tab->table[i][j] = '.';
			j++;
		}
		i++;
	}
	return (tab);
}

void	place_tetris()
{
	int	i;
	int	j;

	i = 0;
	while (i < tetris->w)
	{
		j = 0;
		while (j < tetris->h)
		{
			if (tetris->xy[j][i] == '#')
				tab->table[pts->y + j][pts->x + i] = c;
			j++;
		}
		i++;
	}
	ft_memdel((void **)&pts);
}

int		set(t_tetris *tetris, t_tab *tab, t_pts *pts, char c)
{
	int	i;
	int	j;

	i = 0;
	while (i < tetris->w)
	{
		j = 0;
		while (j < tetri->h)
		{
			if (tetri->xy[j][i] == '#' && tab->table[y + j][x + i] != '.')
				return (0);
			j++;
		}
		i++;
	}
	place_tetris(tetris, tab, pts_new(x, y), tetris->value);
	return (1);
}
