/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:45:33 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/27 19:22:39 by fatel-gh         ###   ########.fr       */
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
// int	main()
// {
// 	char	*str = "HI BABY";
// 	int	c = 'c';
// 	char	*found = ft_strchr(str, c);
// 	if (found == NULL)
// 		printf("NULL A BABY\n");
// 	else if (*found == '\0')
// 	{
// 		--found;
// 		printf("[%p][%c]\n", found, *found);
// 		++found;
// 		printf("[%p][\\%d]\n", found,(int)*found);
// 	}
// 	else
// 	{
// 		printf("[%p] %s\n",found, found);
// 		printf("[%p] %c\n", found, *found);
// 	}
// }