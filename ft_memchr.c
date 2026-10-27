/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 15:50:39 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/27 20:24:46 by fatel-gh         ###   ########.fr       */
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
// 	char	*str = "HI BA\0BYXZ";
// 	int	c = 'Y';
// 	char	*found = ft_memchr(str, c, 10);
// 	if (found == NULL)
// 		printf("NULL A BABY\n");
// 	else if (*found == '\0')
// 	{
// 		--found;
// 		printf("[%p][%c]\n", found, *found);
// 		++found;
// 		printf("[%p][\\%d]\n", found,(int)*found);
// 	}
// 	else
// 	{
// 		printf("[%p] %s\n",found, found);
// 		printf("[%p] %c\n", found, *found);
// 	}
// }