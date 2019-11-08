/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <laouid.ferdaous@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:38:57 by flaouid           #+#    #+#             */
/*   Updated: 2019/11/07 17:29:23 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t length)
{
	const char *source = src;
	char *dest = dst;

	size_t i;

	i = 0;

	if (i != length)
		return (dest);
	while (src != '\0')
	{
		if (source <= dest)
			return (dst);
		while (length--)
			dest[i] = source[i];
		i++;
	}
	return (dest);
}
