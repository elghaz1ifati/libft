/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:39:15 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/06 21:11:40 by fatel-gh         ###   ########.fr       */
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
// 	printf("%zu\n",ft_strlen("hello baby"));
// 	printf("%zu\n",strlen("hello baby"));
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
// void	test_strchr()
// {
// 	printf("======== ft_strchr ========\n");
// 	char	*str = "hello fati";
// 	int	c = 'f';
// 	printf("%s\n", str);
// 	printf("%c -> %s\n", c, ft_strchr(str, c));
// }
// void	test_strrchr()
// {
// 	printf("======== ft_strrchr ========\n");
// 	char	*str = "hello ftati";
// 	int	c = 't';
// 	printf("%s\n", str);
// 	printf("%c -> %s\n", c, ft_strrchr(str, c));
// }
// void	test_strncmp()
// {
// 	printf("======== ft_strncmp ========\n");
// 	char	*s1 = "hello";
// 	char	*s2 = "helko";
// 	printf("%d\n", ft_strncmp(s1, s2, 2));
// }
// void	test_memchr()
// {
// 	printf("======== ft_memchr ========\n");
// 	char	*str = "hello fati";
// 	int	c = 'a';
// 	char	*p1 = ft_memchr(str, c, 11);
// 	char	*p2 =  memchr(str, c, 11);
// 	if (!p1)
// 		printf("NULL\n");
// 	else
// 		printf("%c\n", *p1);
	
// 	printf("======== memchr ========\n");
// 	if (!p2)
// 		printf("NULL\n");
// 	else
// 		printf("%c\n", *p2);
// }
// void	test_memcmp()
// {
// 	printf("======== ft_memcmp ========\n");
// 	char	*s1 = "hello";
// 	char	*s2 = "helko";
// 	printf("%d\n", ft_memcmp(s1, s2, 6));
// 	printf("======== memcmp ========\n");
// 	printf("%d\n", memcmp(s1, s2, 6));
// }
// void	test_strnstr()
// {
// 	printf("======== ft_strnstr ========\n");
// 	printf("%s\n", ft_strnstr("hello !","lo", 8));
// 	printf("======== strstr ========\n");
// 	printf("%s\n", strstr("hello !","lo"));	
// }
// void	test_atoi()
// {
// 	printf("======== ft_atoi ========\n");
// 	printf("%d\n", ft_atoi("-42"));
// 	printf("======== atoi ========\n");
// 	printf("%d\n", atoi("-42"));
// }
// void	test_strdup()
// {
// 	printf("======== ft_strdup ========\n");
// 	char	*str = "hello fati";
// 	char	*p1 = ft_strdup(str);
// 	char	*p2 = strdup(str);
// 	printf("[%p] %s\n", &str, str);
// 	printf("[%p] %s\n", &p1, p1);
// 	printf("======== strdup ========\n");
// 	printf("[%p] %s\n", &str, str);
// 	printf("[%p] %s\n", &p2, p2);
// }


int	main()
{
	printf("======== Part 1 libc functions ========\n");
	printf("\n");
	// test_EOF
	// int	eof;
	// while ((eof =  getchar())!= EOF)
	// 	printf("%d\n", eof);
	// printf("%d\n", eof);
	
	// test_isalpha();
	// printf("\n");
	// test_isdigit();
	// printf("\n");
	// test_isalnum();
	// printf("\n");
	// test_isascii();
	// printf("\n");
	// test_isprint();
	// printf("\n");
	// test_strlen();
	// printf("\n");
	// test_memset();
	// printf("\n");
	// test_bzero();
	// printf("\n");
	// test_memcpy();
	// printf("\n");
	// test_memmove();
	// printf("\n");
	// test_strlcpy();
	// printf("\n");
	// test_strlcat();
	// printf("\n");
	// test_toupper();
	// printf("\n");
	// test_tolower();
	// printf("\n");
	// test_strchr();
	// printf("\n");
	// test_strrchr();
	// printf("\n");
	// test_strncmp();
	// printf("\n");
	// test_memchr();
	// printf("\n");
	// test_memcmp();
	// printf("\n");
	// test_strnstr();
	// printf("\n");
	// test_atoi();
	// printf("\n");
	// test_calloc();
	// printf("\n");
	// test_strdup();
}