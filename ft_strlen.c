/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:52:43 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/26 11:57:15 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("\n===== ft_strlen =====\n");
// 	printf("test [hello]: expected [5] got [%zu]\n", ft_strlen("hello"));
// 	printf("test [empty]: expected [0] got [%zu]\n", ft_strlen(""));
// 	printf("test [42]: expected [2] got [%zu]\n", ft_strlen("42"));
// 	printf("test [spaces]: expected [3] got [%zu]\n", ft_strlen("   "));
// 	return (0);
// }