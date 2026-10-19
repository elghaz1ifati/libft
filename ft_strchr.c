/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:45:33 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/19 12:55:06 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char s[10] = "azbc";
// 	// printf("%s\n", ft_strchr(s, 'u'));
// 	printf("%s", strchr(s, 'i'));
// }