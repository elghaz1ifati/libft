/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:20:59 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/19 13:45:05 by fatel-gh         ###   ########.fr       */
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
// int	main(void)
// {
// 	char	s[] = "banana";
// 	printf("1: %s\n", ft_strrchr(s, 'a'));  // a
// 	printf("2: %s\n", ft_strrchr(s, 'n'));  // na
// 	printf("3: %s\n", ft_strrchr(s, 'b'));  // banana
// 	printf("4: %p\n", (void *)ft_strrchr(s, 'z')); // NULL
// 	printf("5: %s\n", ft_strrchr(s, '\0')); // empty string
// 	printf("6: %s\n", ft_strrchr(s, 'a' + 0)); // a
// 	printf("7: %s\n", ft_strrchr("", '\0')); // empty string
// 	printf("8: %p\n", (void *)ft_strrchr("", 'x')); // NULL
// 	return (0);
// }
// size_t	len;
	// while (1)
	// {
	// 	if (str[len] == (unsigned char)c)
	// 		return ((char *)&str[len]);
	// 	if (len == 0)
	// 		break ;
	// 	len--;
	// }