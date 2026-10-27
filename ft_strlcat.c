/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 14:19:53 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/27 18:35:27 by fatel-gh         ###   ########.fr       */
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
// int	main()
// {
// 	char	*src = "fati!";
// 	char	dest[20] = "HELLO ";
// 	printf("[%p] %s\n", &dest, dest);
// 	size_t	size = ft_strlcat(dest, src, 20);
// 	printf("[%p] %s\n", &src, src);
// 	printf("[%p] %s\n", &dest, dest);
// 	printf("%zu\n", size);
// }