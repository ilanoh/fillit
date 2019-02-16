/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 10:35:47 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 14:47:31 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*(const unsigned char *)s1 != *(const unsigned char *)s2)
			return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
