/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:30:40 by iohayon           #+#    #+#             */
/*   Updated: 2019/01/19 14:48:49 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)ft_memalloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		str[i] = '\0';
		i++;
	}
	str[size] = '\0';
	return (str);
}
