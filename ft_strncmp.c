/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:47:00 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/19 13:57:03 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t byte)
{
	size_t	i;

	i = 0;
	while (i < byte && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("1: %d\n", ft_strncmp("hello", "hello", 5));
// 	printf("2: %d\n", ft_strncmp("hello", "hallo", 5));
// 	printf("3: %d\n", ft_strncmp("hello", "hello", 0));
// 	printf("4: %d\n", ft_strncmp("hello", "help", 3));
// 	printf("5: %d\n", ft_strncmp("abc", "abcd", 4));
// 	printf("6: %d\n", ft_strncmp("abcd", "abc", 4));
// 	printf("7: %d\n", ft_strncmp("", "", 5));
// 	printf("8: %d\n", ft_strncmp("", "abc", 3));
// 	printf("9: %d\n", ft_strncmp("abc", "", 3));
// 	printf("10: %d\n", ft_strncmp("abc", "abd", 2));
// 	return (0);
// }