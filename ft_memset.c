/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:21:34 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/30 23:43:14 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t byte)
{
	unsigned char	*b;
	size_t			index;

	b = (unsigned char *)ptr;
	index = 0;
	while (index < byte)
	{
		b[index] = (unsigned char)value;
		index++;
	}
	return (ptr);
}

// #include <stdio.h>
// int	main()
// {
// 	int b;
// 	int i;
// 	char	str[6] = "hello";
// 	ft_memset(str, 'F', 3);
// 	i = 0;
// 	while (str[i])
// 	{
// 		printf("[%c]",str[i]);
// 		i++;
// 	}
// 	printf("[%c]\n", str[i]);
// 	b = 0;
// 	//1337
// 	ft_memset(&b, 0x5, 2);
// 	ft_memset(&b, 0x39, 1);
// 	printf("[%d]\n", b);
// 	b = 0;
// 	//-1337
// 	ft_memset(&b, 0xFF, 4);
// 	ft_memset(&b, 0xFA, 1);
// 	ft_memset((unsigned char *)&b + 1, 0xFA, 1);
// 	ft_memset((unsigned char *)&b + 2, 0xFF, 2);
// 	ft_memset(&b, 0xC7, 1);
// 	printf("[%d]\n", b);
// }