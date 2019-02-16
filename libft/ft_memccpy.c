/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:37:18 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 14:46:25 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	cc;
	size_t			i;
	unsigned char	*dst2;
	unsigned char	*src2;

	i = 0;
	cc = (unsigned char)c;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == cc)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
