/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:50:39 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/18 16:02:50 by fatel-gh         ###   ########.fr       */
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

// #include <stdio.h>
// int	main()
// {
// 	char	str[] = "hello";
// 	printf("1: %s\n", (char *)ft_memchr(str, 'H', 5));
// 	printf("2: %s\n", (char *)ft_memchr(str, 'l', 5));
// 	printf("3: %s\n", (char *)ft_memchr(str, 'o', 5));
// 	printf("4: %p\n", ft_memchr(str, 'z', 5)); // nil (null pointer %p)
// 	printf("5: %p\n", ft_memchr(str, 'l', 2));
// 	printf("6: %p\n", ft_memchr(str, 'H', 0));
// 	printf("7: %p\n", ft_memchr(str, '\0', 6));
// }