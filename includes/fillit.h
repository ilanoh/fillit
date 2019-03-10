/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 15:26:44 by iohayon           #+#    #+#             */
/*   Updated: 2019/03/10 15:28:15 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include "libft.h"

typedef	struct	s_tab
{
	int			size;
	char		**table;
}				t_tab;
typedef	struct	s_pts;
{
	int			x;
	int			y;
}				t_pts;
typedef	struct	s_tetris
{
	char		**xy;
	int			w;
	int			h;
	char		value;
}				t_tetris;
t_list			*process(int fd);
void			display(t_tab *tab);
void			free_tab(t_tab *tab);
t_tab			*tab_new(int size);
int				set(t_tetris *tetris, t_tab *tab, t_pts *pts, char c);
t_tab			*resolve(t_list *list);
t_pts			*pts_new(int x, int y);
t_tetris		*ttrs_new(char **set, int w, int h, char c);
void			free_ttrs
int		main(int ac, char **av);
int		get_next_line(const int fd, char **line);

#endif
