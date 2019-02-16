/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 13:37:53 by iohayon           #+#    #+#             */
/*   Updated: 2019/01/19 18:53:37 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char*)malloc(size);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
