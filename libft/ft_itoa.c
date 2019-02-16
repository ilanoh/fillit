/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 09:52:13 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 15:42:57 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_norme(long n2, size_t size_n, char *s, long signe)
{
	while (size_n--)
	{
		s[size_n] = n2 % 10 + '0';
		n2 /= 10;
	}
	if (signe < 0)
		s[0] = '-';
	return (s);
}

char			*ft_itoa(int n)
{
	char	*s;
	long	signe;
	long	n2;
	size_t	size_n;

	n2 = (long)n;
	size_n = 0;
	signe = (n < 0) ? -1 : 1;
	n2 = signe * n2;
	while (n2 >= 1)
	{
		size_n++;
		n2 /= 10;
	}
	if (n <= 0)
		size_n++;
	s = ft_strnew(size_n);
	if (s == NULL)
		return (NULL);
	n2 = (long)n;
	n2 = signe * n2;
	ft_norme(n2, size_n, s, signe);
	return (s);
}
