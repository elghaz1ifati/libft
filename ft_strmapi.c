/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:08:06 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/29 18:18:33 by fatel-gh         ###   ########.fr       */
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
// char	uppcaseifeven(unsigned int i, char c)
// {
// 	if(i % 2 == 0 && c >= 'a' && c <= 'z')
// 		c -= 32;                    
// 	return (c);
// }
// int	main()
// {
// 	char	*newstr;
// 	newstr = ft_strmapi("hello", uppcaseifeven);
// 	if (!newstr)
// 		printf("NULL\n");
// 	else 
// 		printf("%s\n", newstr);
// 	free(newstr);
// 	return (0);
// }