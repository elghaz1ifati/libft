/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:11:46 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/03 12:46:15 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t byte)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				count;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	count = 0;
	while (count < byte)
	{
		d[count] = s[count];
		count++;
	}
	return (dest);
}
