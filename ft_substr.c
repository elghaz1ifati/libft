/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 16:45:14 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/28 12:00:16 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	sub = malloc (len + 1);
	if (!sub)
		return (NULL);
	ft_memcpy(sub, s + start, len);
	sub[len] = '\0';
	return (sub);
}

// #include <stdio.h>
// int main()
// {
// 	const char *s = "";
// 	unsigned int start = 3;
// 	size_t len = 5;
// 	char *sub = ft_substr(s, start, len);
// 	size_t i = 0;
// 	if (!s)
// 		printf("NULL AKHTI");
// 	else 
// 	{
// 		while (ft_strlen(sub) > i)
// 		{
// 			printf("[%c]", sub[i]);
// 			i++;
// 		}
// 		printf("[\\%d]",sub[i]);
// 	}
// 	printf("\n");
// 	free (sub);
// }