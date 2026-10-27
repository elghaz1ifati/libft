/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:47:00 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/27 20:00:56 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t byte)
{
	size_t	i;

	i = 0;
	while (i < byte && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	char	*s1 = "HI BABY";
// 	char	*s2 = "HI BaBY";
// 	if (s1 == NULL || s2 == NULL)
// 		printf("NULL pointer detected\n");
// 	else
// 	{
// 		int	cmp = ft_strncmp(s1, s2, ft_strlen(s2));
// 		printf("%d\n", cmp);
// 	}
// }