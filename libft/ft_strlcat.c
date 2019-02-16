/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 10:56:44 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 15:00:40 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t destl;
	size_t srclen;

	destl = 0;
	while (dest[destl] != '\0')
		destl++;
	i = 0;
	srclen = 0;
	while (src[i] != '\0' && destl + i < size - 1)
	{
		if (size != 0)
			dest[destl + i] = src[i];
		i++;
		srclen++;
	}
	if (size != 0)
		dest[destl + i] = '\0';
	while (src[srclen] != '\0')
		srclen++;
	if (size < destl)
		return (srclen + size);
	return (destl + srclen);
}
