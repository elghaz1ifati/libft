/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:20:59 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/27 19:34:15 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (unsigned char)c)
			return ((char *)&str[len]);
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main()
// {
// 	char	*str = "HI BAYACAB";
// 	int	c = '\0';
// 	char	*found = ft_strrchr(str, c);
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