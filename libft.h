/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:19:18 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/18 15:22:07 by fatel-gh         ###   ########.fr       */
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
size_t	ft_strlen(char *str);
void	*ft_memset(void *ptr, int value, size_t byte);
void	ft_bzero(void *ptr, size_t byte);
void	*ft_memcpy(void *dest, const void *src, size_t byte);
void	*ft_memmove(void *dest, const void *src, size_t byte);