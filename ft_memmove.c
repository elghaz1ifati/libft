/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:51:53 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/18 15:19:12 by fatel-gh         ###   ########.fr       */
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
	else if (d > s)
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

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str[20] = "ABCDE";
// 	ft_memmove(str+2, "XYZ", 2);
// 	printf("1: %s\n", str);
// 	return (0);
// }