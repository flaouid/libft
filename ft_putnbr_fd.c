/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <laouid.ferdaous@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:04:21 by flaouid           #+#    #+#             */
/*   Updated: 2019/11/07 14:23:02 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long nbr;

	nbr = n;
	if (n <= -2147483648)
	{
		ft_putchar('-');
		write(fd, &"2147483648", 10);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n, fd);
		ft_putchar(n % 10 + '0');
	}
	if (n >= 0 && n < 10)
	{
		ft_putchar(n + '0');
	}
}
