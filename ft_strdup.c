/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:13:25 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/27 21:42:00 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(str) + 1;
	dup = malloc(len);
	if (!dup)
		return (NULL);
	ft_memcpy(dup, str, len);
	return (dup);
}

// #include <stdio.h>
// int	main()
// {
// 	char	*str = "hello fati";
// 	char	*dup = ft_strdup(str);
// 	if (dup == NULL)
// 		printf("NULL AKHTI");
// 	else
// 	{
// 		printf("[%p] = %s\n", &str, str);
// 		printf("[%p] = %s\n", &dup, dup);
// 		free(dup);
// 	}
// }