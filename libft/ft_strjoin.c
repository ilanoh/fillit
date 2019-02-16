/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:28:08 by iohayon           #+#    #+#             */
/*   Updated: 2019/02/02 17:46:19 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	l;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	l = ft_strlen(s1);
	s = ft_strnew(l + ft_strlen(s2) + 1);
	if (s == NULL)
		return (NULL);
	ft_strcpy(s, s1);
	ft_strcpy(s + l, s2);
	free((void *)s1);
	return (s);
}
