/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <laouid.ferdaous@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 13:25:59 by flaouid           #+#    #+#             */
/*   Updated: 2019/11/07 14:29:16 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	unsigned long int i;
	unsigned long int nb;
	unsigned long int neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (ptr[i] <= ' ')
		i++;
	while (ptr[i] == '+' || ptr[i] == '-')
	{
		if (ptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (ptr[i] >= '0' && ptr[i] <= '9')
	{
		nb = (nb * 10) + (ptr[i] - '0');
		i++;
	}
	return (nb * neg);
}
