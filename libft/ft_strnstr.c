/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 17:09:55 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 15:05:04 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hk, const char *nl, size_t len)
{
	size_t	i;
	int		t;
	size_t	j;
	int		needle_len;

	i = 0;
	t = 0;
	needle_len = ft_strlen((char*)nl);
	if (nl[i] == '\0')
		return ((char*)hk);
	while (hk[i] && nl[t] && i < len)
	{
		t = 0;
		j = i;
		while (hk[j] && nl[t] && hk[j] == nl[t] && j < len)
		{
			j++;
			t++;
		}
		if (t == needle_len)
			return ((char*)hk + i);
		else
			i++;
	}
	return (0);
}
