/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:14:05 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 14:46:33 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dst2;
	unsigned char *src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if ((dst < (src + len)) && (src < dst))
	{
		while (len)
		{
			len--;
			dst2[len] = src2[len];
		}
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}
