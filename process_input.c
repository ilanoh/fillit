/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 16:14:41 by iohayon           #+#    #+#             */
/*   Updated: 2019/02/23 19:14:17 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**create_tetriminos(int fd, char **line)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	**tetri;

	while (get_next_line(fd, &line))
	{
		i = 0;
		j = 0;
		while (line[i])
		{
			while (line[i][j])
			{
				line[i][j] = tetri[k][l];
				j++;
				l++;
			}
			i++;
			k++;
		}
	}
	return (tetri);
}

int		check_tetri(char **tetri)
{
	int	i;
	int	j;
	int	contact;

	i = 1;
	while (tetri[i - 1])
	{
		while (i % 5 != 0)
		{
			j = 0;
			contact = 0;
			if (ft_strchr(tetri[i - 1]) != "#" || ft_strchr(tetri[i - 1]) != ".")
				return (0);
			if (ft_strlen(tetri[i - 1]) != 4)
				return (0);
			while (tetri[i - 1][j] && tetri[i - 1][j + 1])
			{
				if ((tetri[i - 1][j] == "#") && (tetri[i - 1][j + 1] == "#"))
					contact++;
				if (tetri[i - 1][j - 1] && (tetri[i - 1][j] == "#")
						&& (tetri[i - 1][j - 1] == "#"))
					contact++;
				if (tetri[i - 2] && (tetri[i - 1][j] == "#") && (tetri[i - 2][j]))
					contact++;
				if (tetri[i] && (tetri[i - 1][j] == "#") && (tetri[i][j]))
	                    contact++;
				j++;
			}
			i++;
		}
		while (i % 5 == 0)
		{
			if (ft_strchr(tetri[i - 1]) != '\n')
				return (0);
			i++;
		}
	}
	if (i > 130)
		return (0);
	if (contact != 6)
		return (0);
}

int     process_input()
{
	int     fd;
	char    **line;
	char    **tetri;

	tetri = create_tetriminos(fd, line);
	check_tetri(tetri);
}
