/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:45:14 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/20 19:01:28 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = malloc (len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}

// #include <stdio.h>
// int	main()
// {
// 	char	*str = "hello fati";
// 	int	i;
// 	i = 0;
// 	printf("str = ");
// 	while (i < 10)
// 	{
// 		printf("[%d]%c ",i, str[i]);
// 		i++;
// 	}
// 	printf("\nsub = ");
// 	char	*sub = ft_substr(str, 2, 5);
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("[%d]%c ",i, sub[i]);
// 		i++;
// 	}
// // 	printf("[%d]%c ",i, sub[i]);
// 	printf ("\n");
// 	free(sub);
// }