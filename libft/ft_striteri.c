/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:10:34 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 15:30:28 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	size_t	size;
	size_t	i;

	if (s && f)
	{
		size = ft_strlen(s);
		i = 0;
		while (i < size)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}
