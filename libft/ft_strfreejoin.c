/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfreejoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 17:46:37 by iohayon           #+#    #+#             */
/*   Updated: 2019/02/02 17:54:08 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strfreejoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;
	int		taille;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	taille = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)ft_memalloc(sizeof(char) * (taille + 1))))
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	free((void *)s1);
	return (str);
}
