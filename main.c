/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:39:15 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/06 18:23:39 by fatel-gh         ###   ########.fr       */
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
// 	char a[5] = "Hello";           // {'H','e','l','l','o','\0'}
// 	char b[5] = {'H','e','l','l','o'}; // no '\0' here
// 	printf("%zu\n", strlen(a));  // 5
// 	printf("%zu\n", strlen(b));  // undefined behaviour
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
// void	test_bzero()
// {
// 	printf("======== ft_bzero ========\n");
// 	char	str[7] = "fatima";
// 	ft_bzero(str+3, 2);
// 	printf("%s\n", str);
// }
// void	test_memcpy()
// {
// 	char	dest[] = "hello";
// 	char	src[] = "fati";
// 	printf("======== ft_memcpy ========\n");
// 	ft_memcpy(dest, src, 2);
// 	int	i = 0;
// 	while (dest[i])
// 	{
// 		printf("[%c]", dest[i]);
// 		i++;
// 	}
// 	printf("[\\%d]\n", dest[i]);
// 	printf("======== memcpy ========\n");
// 	memcpy(dest, src, 2);
// 	i = 0;
// 	while (dest[i])
// 	{
// 		printf("[%c]", dest[i]);
// 		i++;
// 	}
// 	printf("[\\%d]\n", dest[i]);
// }
// void	test_memmove()
// {
// 	char	s1[] = "fati"; // dest = ati
// 	printf("======== ft_memmove========\n");
// 	char *d1 = ft_memmove(s1 + 1, s1, 2); // s1 + 1  = ati
// 	int	i = 0;
// 	while (d1[i])
// 	{
// 		printf("[%c]", d1[i]);
// 		i++;
// 	}
// 	printf("[\\%d]\n", d1[i]);
	
// 	printf("======== memmove ========\n");
// 	char	s2[] = "fati"; // s2 + 1 = ati
// 	char	*d2 = memmove(s2 + 1, s2, 2);
// 	i = 0;
// 	while (d2[i])
// 	{
// 		printf("[%c]", d2[i]);
// 		i++;
// 	}
// 	printf("[\\%d]\n", d2[i]);
// }
// void	test_strlcpy()
// {
// 	printf("======== ft_strlcpy ========\n");
// 	char	*src = "FATI";
// 	char	dest[4];
// 	int	i = 0;
// 	ft_strlcpy(dest, src, 4);
// 	while (dest[i])
// 	{
// 		printf("[%c]", dest[i]);
// 		i++;
// 	}
// 	printf("[\\%d]\n", dest[i]);
// 	printf("%zu\n",ft_strlcpy(dest, src, 4));
// }
// void	test_strlcat()
// {
//  	printf("======== ft_strlcat ========\n");
// 	char	*src = "MAZ";
// 	char	dest[9] = "FATI ";
// 	int	i = 0;
// 	int	size = ft_strlcat(dest, src, 9);
// 	while (dest[i])
// 	{
// 		printf("[%c]", dest[i]);
// 		i++;
// 	}
// 	printf("[\\%d]\n", dest[i]);
// 	printf("%d\n", size);
// }
// void	test_toupper()
// {
// 	printf("======== ft_toupper ========\n");
// 	printf("%c\n",ft_toupper('r'));
// 	printf("%c\n",toupper('r'));
// }
// void	test_tolower()
// {
// 	printf("======== ft_tolower ========\n");
// 	printf("%c\n",ft_tolower('R'));
// 	printf("%c\n",tolower('R'));
// }
void	test_strchr()
{
	printf("======== ft_strchr ========\n");
	char	*str = "hello fati";
	int	c = 'f';
	printf("%s\n", str);
	printf("%c -> %s\n", c, ft_strchr(str, c));
}

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
	// test_bzero();
	// test_memcpy();
	// test_memmove();
	// test_strlcpy();
	// test_strlcat();
	// test_toupper();
	// test_tolower();
	test_strchr();
}