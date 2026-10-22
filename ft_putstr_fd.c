/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:23:50 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/22 10:31:55 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// #include <stdio.h>
// #include <fcntl.h>
// int main()
// {
// 	int fd = open("testfd.txt", O_WRONLY);
// 	printf("fd ==> %d\n", fd);
// 	write(fd, "new hello", 9);
// 	ft_putstr_fd("hello\n", 1);
// }