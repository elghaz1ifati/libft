/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:39:15 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/05 19:44:46 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// void	test_isalpha()
// {
// 	printf("======== ft_isalpha ========\n");
// 	printf("%d\n",ft_isalpha('r'));
// 	printf("%d\n",!!isalpha('r'));
// }
// void	test_isdigit()
// {
// 	printf("======== ft_isdigit ========\n");
// 	printf("%d\n",ft_isdigit('5'));
// 	printf("%d\n",!!isdigit('5'));
// }
// void	test_isalnum()
// {
// 	printf("======== ft_isalnum ========\n");
// 	printf("%d\n",ft_isalnum('-'));
// 	printf("%d\n",!!isalnum('-'));
// }
// void	test_isascii()
// {
// 	printf("======== ft_isascii ========\n");
// 	printf("%d\n",ft_isascii(140));
// 	printf("%d\n",!!isascii(140));
// }
// void	test_isprint()
// {
// 	printf("======== ft_isprint ========\n");
// 	printf("%d\n",ft_isprint (140));
// 	printf("%d\n",!!isprint(140));
// }
// void	test_strlen()
// {
// 	printf("======== ft_strlen ========\n");
// 	printf("%zu\n",ft_strlen(""));
// 	printf("%zu\n",strlen(""));
// }
// void	test_memset()
// {
// 	printf("======== ft_memset ========\n");
// 	char	str[11] = "hello katy";
// 	printf("string: %s\n", str);
// 	ft_memset(str+6, 'f', 1);
// 	printf("ft_memset: %s\n", str);
// 	printf("======== memset ========\n");
// 	printf("string: %s\n", str);
// 	memset(str+9 ,'i', 1);     
// 	printf("memset: %s\n", str);
// 	printf("======== emojie F09F9982 ========\n");
// 	char	emojie[5];
// 	ft_memset(&emojie[0], 0xF0, 1);
// 	ft_memset(&emojie[1], 0x9F, 1);
// 	ft_memset(&emojie[2], 0x99, 1);
// 	ft_memset(&emojie[3], 0x82, 1);
// 	emojie[4] = '\0';
// 	printf("%s\n", emojie);
// 	printf("======== 1337 ========\n");
// 	int	n = 0;
// 	ft_memset(&n, 0x05, 2);
// 	ft_memset(&n, 0x39, 1);
// 	printf("%d\n", n);
// 	printf("======== -1337 ========\n");
// 	ft_memset(&n, 0xFF, 4); // n = 0xFFFFFFFF (-1)
// 	ft_memset(&n, 0xC7, 1);
// 	ft_memset((char*)&n + 1, 0xFA, 1);
// 	printf("%d\n", n);
// }

int	main()
{
	printf("======== Part 1 libc functions ========\n");
	// test_EOF
	// int	eof;
	// while ((eof =  getchar())!= EOF)
	// 	printf("%d\n", eof);
	// printf("%d\n", eof);
	
	// test_isalpha();
	// test_isdigit();
	// test_isalnum();
	// test_isascii();
	// test_isprint();
	// test_strlen();
	// test_memset();
	
}