/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:59:51 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/19 14:15:16 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(src);
	if (dstsize == 0)
		return (s_len);
	i = 0;
	while (i < (dstsize - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s_len);
}

// #include <stdio.h>
// #include "libft.h"
// int	main(void)
// {
// 	char	dest1[20];
// 	char	dest2[20];
// 	char	dest3[20];
// 	char	dest4[1];
// 	char	dest5[20];
// 	printf("1: %zu\n", ft_strlcpy(dest1, "hello", 20));
// 	printf("   dest: %s\n", dest1);
// 	printf("2: %zu\n", ft_strlcpy(dest2, "hello", 3));
// 	printf("   dest: %s\n", dest2);
// 	printf("3: %zu\n", ft_strlcpy(dest3, "hello", 1));
// 	printf("   dest: %s\n", dest3);
// 	printf("4: %zu\n", ft_strlcpy(dest4, "hello", 0));
// 	printf("   dest: not modified\n");
// 	printf("5: %zu\n", ft_strlcpy(dest5, "", 20));
// 	printf("   dest: \"%s\"\n", dest5);
// 	return (0);
// }