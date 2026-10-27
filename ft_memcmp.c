/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 16:07:13 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/27 20:33:04 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t byte)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	i = 0;
	while (byte > 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
		byte--;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char	*s1 = "HELLO\0 WORLD";
// 	char	*s2 = "HELLO \0WORLD";
// 	int	memcmp = ft_memcmp(s1, s2, 12);
// 	printf("%d\n", memcmp);
// }