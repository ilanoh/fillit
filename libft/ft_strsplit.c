/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 14:16:45 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 15:43:00 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_char(char a, char c)
{
	if (a == c)
		return (1);
	else
		return (0);
}

static size_t	wc(char *s, char c)
{
	size_t	wordcount;
	size_t	i;

	wordcount = 0;
	i = 0;
	while (s[i])
	{
		if ((!is_char(s[i], c) && is_char(s[i + 1], c)) ||
				(!is_char(s[i], c) && s[i + 1] == '\0'))
		{
			wordcount++;
			i++;
		}
		else
			i++;
	}
	return (wordcount);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	fi;
	size_t	la;

	i = 0;
	j = 0;
	tab = NULL;
	if (s && (tab = (char **)malloc(sizeof(char *) * (wc((char *)s, c) + 1))))
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			fi = i;
			while (s[i] && s[i] != c)
				i++;
			la = i;
			if (la > fi)
				tab[j++] = ft_strsub(s, fi, (la - fi));
		}
		tab[j] = NULL;
	}
	return (tab);
}
