/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:44:10 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/22 09:56:00 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// void	test(unsigned int i, char *c)
// {
// 	(void)i;
// 	if(*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }
// int	main()
// {
// 	char	s[] = "hello fati";
// 	printf("Before : %s\n", s);
// 	ft_striteri(s, test);
// 	printf("After : %s\n", s);
// }