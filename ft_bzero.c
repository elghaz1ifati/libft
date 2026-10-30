/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:01:06 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/30 23:45:26 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t byte)
{
	ft_memset(ptr, 0, byte);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	str[7] = "hello";
// 	size_t	i;
// 	i = 0;
// 	while (i < sizeof(str))
// 	{
// 		printf("[%p][%c]\n",&str[i], (unsigned char)str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	ft_bzero(str, 6);
// 	i = 0;
// 	while (i < sizeof(str))
// 	{
// 		printf("[%p][%d]\n",&str[i], (unsigned char)str[i]);
// 		i++;
// 	}
// 	int	*p = NULL;
// 	printf("%p",p);
// 	return (0);
// }