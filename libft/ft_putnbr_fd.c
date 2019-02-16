/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iohayon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 15:33:22 by iohayon           #+#    #+#             */
/*   Updated: 2018/12/15 15:49:23 by iohayon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n >= 0 && n < 10)
		ft_putchar_fd(n + 48, fd);
	if (n > 9 && n <= 2147483647)
	{
		ft_putnbr_fd(n / 10, fd);
		c = n % 10 + 48;
		ft_putchar_fd(c, fd);
	}
	if (n < 0 && n > -2147483648)
	{
		n = -n;
		ft_putchar_fd(45, fd);
		ft_putnbr_fd(n, fd);
	}
	if (n == -2147483648)
	{
		ft_putchar_fd(45, fd);
		ft_putchar_fd(50, fd);
		ft_putnbr_fd(147483648, fd);
	}
}
