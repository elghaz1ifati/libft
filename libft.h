/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:19:18 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/19 13:35:52 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *ptr, int value, size_t byte);
void	ft_bzero(void *ptr, size_t byte);
void	*ft_memcpy(void *dest, const void *src, size_t byte);
void	*ft_memmove(void *dest, const void *src, size_t byte);
void	*ft_memchr(const void *str, int c, size_t byte);
int		ft_memcmp(const void *str1, const void *str2, size_t byte);
char	*ft_strchr(const char *str, int c);