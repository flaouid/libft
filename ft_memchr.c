/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <laouid.ferdaous@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:36:26 by flaouid           #+#    #+#             */
/*   Updated: 2019/11/07 16:33:22 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(void *buf, int c, size_t length)
{
    const char *buffer = (const char*)buf;
    size_t i;

    i = 0;

    while (i < length)
	{
 	if (buffer[i] == c)
    	return ((void*)&buffer[i]);
		i++;
	}
	return (NULL);
}
