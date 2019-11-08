/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:28:07 by flaouid           #+#    #+#             */
/*   Updated: 2019/11/06 14:16:15 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_putstr_fd(char const *s, int fd)
{
	size_t i;

	if (s == NULL)
		return (ft_putstr_fd("(null)", fd));
	i = ft_strlen(s);
	write(fd, s, i);
	return (i);
}
