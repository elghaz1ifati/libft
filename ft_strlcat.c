/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:19:53 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/19 15:20:56 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	while (d_len < dstsize && dest[d_len])
		d_len++;
	s_len = ft_strlen(src);
	if (d_len == dstsize)
		return (dstsize + s_len);
	i = 0;
	while (src[i] && (d_len + i) < (dstsize - 1))
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest1[20] = "Hello";
// 	char	dest2[10] = "Hi";
// 	char	dest3[10] = "";
// 	char	dest4[10] = "Hello";
// 	char	dest5[10] = "ABC";
// 	char	dest6[10] = "AB";
// 	char	dest7[10] = "Hi";
// 	char	dest8[10] = "Hello";
// 	size_t	ret;
// 	ret = ft_strlcat(dest1, " World", sizeof(dest1));
// 	printf("1. dest: [%s], return: %zu\n", dest1, ret);
// 	ret = ft_strlcat(dest2, "!", sizeof(dest2));
// 	printf("2. dest: [%s], return: %zu\n", dest2, ret);
// 	ret = ft_strlcat(dest3, "Hello", sizeof(dest3));
// 	printf("3. dest: [%s], return: %zu\n", dest3, ret);
// 	ret = ft_strlcat(dest4, "", sizeof(dest4));
// 	printf("4. dest: [%s], return: %zu\n", dest4, ret);
// 	ret = ft_strlcat(dest5, "XY", 3);
// 	printf("5. dest: [%s], return: %zu\n", dest5, ret);
// 	ret = ft_strlcat(dest6, "CDE", 4);
// 	printf("6. dest: [%s], return: %zu\n", dest6, ret);
// 	ret = ft_strlcat(dest7, "!", 0);
// 	printf("7. dest: [%s], return: %zu\n", dest7, ret);
// 	ret = ft_strlcat(dest8, "World", 3);
// 	printf("8. dest: [%s], return: %zu\n", dest8, ret);
// 	return (0);
// }