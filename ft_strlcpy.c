/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:59:51 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/27 17:51:32 by fatel-gh         ###   ########.fr       */
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
// int	main()
// {
// 	char *src = "hello";
// 	char dest[20];
// 	ft_strlcpy(dest, src, 20);
// 	printf("%ld\n",	ft_strlcpy(dest, src, 20));
// 	printf("[%p] %s\n",&src, src);
// 	printf("[%p] %s\n",&dest, dest);
// }