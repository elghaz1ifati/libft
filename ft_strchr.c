/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:45:33 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/19 13:08:31 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s[] = "azbc";
// 	printf("1: %s\n", ft_strchr(s, 'a'));  // azbc
// 	printf("2: %s\n", ft_strchr(s, 'b'));  // bc
// 	printf("3: %s\n", ft_strchr(s, 'c'));  // c
// 	printf("4: %p\n", (void *)ft_strchr(s, 'x')); // NULL
// 	printf("5: %s\n", ft_strchr(s, '\0')); // empty string
// 	printf("6: %p\n", (void *)ft_strchr(s, 'z')); // address
// 	return (0);
// }