/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:21:05 by iohayon           #+#    #+#             */
/*   Updated: 2019/02/02 16:38:42 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (0);
	if (!(ptr = (char *)malloc(sizeof(*ptr) * len + 1)))
		return (NULL);
	if (ptr)
	{
		ptr = ft_strncpy(ptr, &s[start], len);
		ptr[len] = '\0';
	}
	return (ptr);
}
