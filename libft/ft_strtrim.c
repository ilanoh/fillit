/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:15:08 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 15:41:16 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*s2;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	if (s[0] == '\0')
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j--;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (i == ft_strlen(s))
		return (ft_strdup(""));
	s2 = ft_strsub(s, i, j - i + 1);
	if (s2 == NULL)
		return (NULL);
	return (s2);
}
