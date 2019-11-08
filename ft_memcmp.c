/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <laouid.ferdaous@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 17:43:17 by flaouid           #+#    #+#             */
/*   Updated: 2019/11/07 17:56:51 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t length)
{
	size_t i;

	i = 0;

	while (length--)
	{
		if (s1 != s2)
			return (s1 - s2);
		i++;
	}
	return (0);
}
