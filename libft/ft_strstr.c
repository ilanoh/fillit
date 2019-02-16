/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 11:30:00 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 15:03:10 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int t;
	int j;
	int to_find_length;

	i = 0;
	t = 0;
	to_find_length = ft_strlen((char*)to_find);
	if (to_find[i] == '\0')
		return ((char*)str);
	while (str[i] && to_find[t])
	{
		t = 0;
		j = i;
		while (str[j] && to_find[t] && str[j] == to_find[t])
		{
			t++;
			j++;
		}
		if (t == to_find_length)
			return ((char*)str + i);
		else
			i++;
	}
	return (0);
}
