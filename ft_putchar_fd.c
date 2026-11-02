/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:11:03 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/02 20:37:24 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>
// #include <fcntl.h>
// int	main()
// {
// 	int fd = open("testfd.txt", O_WRONLY | O_CREAT);
// 	printf("fd -> [%d]\n", fd);
// 	write (fd, "hello", 4);
// 	write(3, " hi", 3);
// 	ft_putchar_fd('F', 1);
// 	printf("\n");
// }