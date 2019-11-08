/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <laouid.ferdaous@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:59:53 by flaouid           #+#    #+#             */
/*   Updated: 2019/11/07 13:34:04 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_strcpy(char *dst, const char *src)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char		*ft_strjoin(const char *separator, const char *s2)
{
	char			*dest;
	unsigned int	length;

	if (separator == NULL || s2 == NULL)
		return (NULL);

length = ft_strlen(separator);
dest = (char*)malloc(length + ft_strlen(s2) + 1);

if (dest == NULL)
	return (NULL);

ft_strcpy(dest, separator);
ft_strcpy(dest + length, s2);

return (dest);
}
