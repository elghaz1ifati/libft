/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:51:53 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/28 17:14:46 by fatel-gh         ###   ########.fr       */
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
	if (!dest || !src)
		return (NULL);
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
// int	main ()
// {
// 	char	str[] = "ABCDE";
// 	int 	i = 0;
// 	printf("===== ft_memmove =====\n");
// 	ft_memmove(str + 2, str, 3);
// 	while(i < 5)
// 	{
// 		printf("[%c]", str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("%p\n", ft_memmove(NULL, NULL, 0));
// 	return (0);
// }