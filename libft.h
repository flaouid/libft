/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flaouid <laouid.ferdaous@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 15:25:32 by flaouid           #+#    #+#             */
/*   Updated: 2019/11/07 17:50:06 by flaouid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_atoi(const char *str);
void	*ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
const char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(char *str, char *substr);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(char *src);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(const char *separator, const char *s2);
size_t	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(int c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t length);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(void *buf, int c, size_t length);
void	*ft_memmove(void *dst, const void *src, size_t length);
int		ft_memcmp(const void *s1, const void *s2, size_t length);
int		ft_isprint(int c);
int		ft_isdigit(int c);

#endif
