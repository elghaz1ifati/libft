/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:51:53 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/03 12:46:27 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t byte)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				count;

	if (byte == 0 || dest == src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if (d < s)
		ft_memcpy(d, s, byte);
	else
	{
		count = byte;
		while (count > 0)
		{
			count--;
			d[count] = s[count];
		}
	}
	return (dest);
}
