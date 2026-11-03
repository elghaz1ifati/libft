/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:50:39 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/03 12:45:58 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t byte)
{
	const unsigned char	*s;

	s = (const unsigned char *)str;
	while (byte > 0)
	{
		if (*s == (unsigned char)c)
			return ((void *)s);
		byte--;
		s++;
	}
	return (NULL);
}
