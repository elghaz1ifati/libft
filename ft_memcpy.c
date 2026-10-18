/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 10:11:46 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/18 15:11:39 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t byte)
{
	unsigned char		*d;
	unsigned const char	*s;
	size_t				count;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	count = 0;
	while (count < byte)
	{
		d[count] = s[count];
		count ++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main()
// {
// 	const char	*s = "a\0cde";
// 	char	d[6] = "ABCDE";
// 	int	i;

// 	i = 0;
// 	while(i < 5)
// 	{
// 		printf("[%c]", s[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_memcpy(d, s, 3);
// 	i = 0;
// 	while(i < 5)
// 	{
// 		printf("[%c]", d[i]);
// 		i++;
// 	}
// 	printf("\n");
// }