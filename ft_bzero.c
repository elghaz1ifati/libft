/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:01:06 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/15 16:37:58 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t byte)
{
	ft_memset(ptr, '0', byte);
}
// #include <stdio.h>
// int	main()
// {
// 	char	str[20] = "hello";
// 	ft_bzero(str+1, 2);
// 	printf("%s", str);
// }