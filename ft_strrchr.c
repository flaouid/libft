/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <laouid.ferdaous@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:07:57 by flaouid           #+#    #+#             */
/*   Updated: 2019/11/07 13:49:57 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		if (s[i] == c)
			return ((char*)s + 1);
		i--;
	}
	return (0);
}
