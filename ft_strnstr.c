/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:04:40 by flaouid           #+#    #+#             */
/*   Updated: 2019/11/06 11:04:07 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *substr)
{
	int i;

	if (!substr[0])
		return (str);
	while (*str)
	{
		i = 0;
		while (str[i] == substr[i] && substr[i])
			i++;
		if (!substr[i])
			return (str);
		str++;
	}
	return (0);
}
