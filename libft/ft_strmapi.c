/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:30:12 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 15:32:29 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	size;
	size_t	i;

	if (!s || !f)
		return (NULL);
	size = ft_strlen((char *)s);
	s2 = ft_strnew(size);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	return (s2);
}
