/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:08:06 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/22 09:38:16 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*new;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new = malloc (len + 1);
	if (!new)
		return (NULL);
	len = 0;
	while (s[len])
	{
		new[len] = f(len, s[len]);
		len++;
	}
	new[len] = '\0';
	return (new);
}

// #include <stdio.h>
// char	test(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }
// int	main(void)
// {
// 	char	*s;
// 	char	*new;
// 	s = "hello";
// 	new = ft_strmapi(s, test);
// 	if (!new)
// 	{
// 		printf("Allocation failed !");
// 		return (1);
// 	}
// 	printf("str : %s\n", s);
// 	printf("new str : %s\n", new);
// 	free (new);	
// }