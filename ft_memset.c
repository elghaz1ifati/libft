/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:21:34 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/15 14:50:28 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t byte)
{
	unsigned char	*b;
	
	b = (unsigned char *)ptr;
	while (byte > 0)
	{
		*b = (unsigned char)value;
		b++;
		byte--;
	}
	return (ptr);
}

// #include <stdio.h>
// int	main()
// {
// 	int	b = 0;
// 	char	str[20] = "hello";
// 	ft_memset(str, 'F', 3);
// 	printf("%s\n",str);
// 	ft_memset(&b, 0x1, 3);
// 	ft_memset(&b, 0x5B, 2);
// 	ft_memset(&b, 0x07, 1);
// 	printf("%d\n", b);
// }