/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:39:15 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/09 01:06:13 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** cc -Wall -Wextra -Werror -g main.c -L. -lft -o main 
** valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./main
** cc -Wall -Wextra -Werror -g -fsanitize=address,undefined main.c ft_*.c -o main_san
** ./main_san
*/

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>

// static void	test_isalpha(void)
// {
// 	printf("======== ft_isalpha ========\n");
// 	printf("%d\n", ft_isalpha('r'));
// 	printf("%d\n", !!isalpha('r'));
// }

// static void	test_isdigit(void)
// {
// 	printf("======== ft_isdigit ========\n");
// 	printf("%d\n", ft_isdigit('5'));
// 	printf("%d\n", !!isdigit('5'));
// }

// static void	test_isalnum(void)
// {
// 	printf("======== ft_isalnum ========\n");
// 	printf("%d\n", ft_isalnum('-'));
// 	printf("%d\n", !!isalnum('-'));
// }

// static void	test_isascii(void)
// {
// 	printf("======== ft_isascii ========\n");
// 	printf("%d\n", ft_isascii(140));
// 	printf("%d\n", !!isascii(140));
// }

// static void	test_isprint(void)
// {
// 	printf("======== ft_isprint ========\n");
// 	printf("%d\n", ft_isprint(140));
// 	printf("%d\n", !!isprint(140));
// }

// static void	test_strlen(void)
// {
// 	printf("======== ft_strlen ========\n");
// 	printf("%zu\n", ft_strlen("hello baby"));
// 	printf("%zu\n", strlen("hello baby"));
// }

// static void	test_memset(void)
// {
// 	printf("======== ft_memset ========\n");
// 	char	str[11] = "hello katy";
// 	printf("string: %s\n", str);
// 	ft_memset(str + 6, 'f', 1);
// 	printf("ft_memset: %s\n", str);
// 	printf("======== memset ========\n");
// 	printf("string: %s\n", str);
// 	memset(str + 9, 'i', 1);
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
// 	ft_memset((char *)&n + 1, 0xFA, 1);
// 	printf("%d\n", n);
// }

// static void	test_bzero(void)
// {
// 	printf("======== ft_bzero ========\n");
// 	char	str[7] = "fatima";
// 	ft_bzero(str + 3, 2);
// 	printf("%s\n", str);
// }

// static void	test_memcpy(void)
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

// static void	test_memmove(void)
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

// static void	test_strlcpy(void)
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
// 	printf("%zu\n", ft_strlcpy(dest, src, 4));
// }

// static void	test_strlcat(void)
// {
// 	printf("======== ft_strlcat ========\n");
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

// static void	test_toupper(void)
// {
// 	printf("======== ft_toupper ========\n");
// 	printf("%c\n", ft_toupper('r'));
// 	printf("%c\n", toupper('r'));
// }

// static void	test_tolower(void)
// {
// 	printf("======== ft_tolower ========\n");
// 	printf("%c\n", ft_tolower('R'));
// 	printf("%c\n", tolower('R'));
// }

// static void	test_strchr(void)
// {
// 	printf("======== ft_strchr ========\n");
// 	char	*str = "hello fati";
// 	int	c = 'f';
// 	printf("%s\n", str);
// 	printf("%c -> %s\n", c, ft_strchr(str, c));
// }

// static void	test_strrchr(void)
// {
// 	printf("======== ft_strrchr ========\n");
// 	char	*str = "hello ftati";
// 	int	c = 't';
// 	printf("%s\n", str);
// 	printf("%c -> %s\n", c, ft_strrchr(str, c));
// }

// static void	test_strncmp(void)
// {
// 	printf("======== ft_strncmp ========\n");
// 	char	*s1 = "hello";
// 	char	*s2 = "helko";
// 	printf("%d\n", ft_strncmp(s1, s2, 2));
// }

// static void	test_memchr(void)
// {
// 	printf("======== ft_memchr ========\n");
// 	char	*str = "hello fati";
// 	int	c = 'a';
// 	char	*p1 = ft_memchr(str, c, 11);
// 	char	*p2 = memchr(str, c, 11);
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

// static void	test_memcmp(void)
// {
// 	printf("======== ft_memcmp ========\n");
// 	char	*s1 = "hello";
// 	char	*s2 = "helko";
// 	printf("%d\n", ft_memcmp(s1, s2, 6));
// 	printf("======== memcmp ========\n");
// 	printf("%d\n", memcmp(s1, s2, 6));
// }

// static void	test_strnstr(void)
// {
// 	printf("======== ft_strnstr ========\n");
// 	printf("%s\n", ft_strnstr("hello !", "lo", 8));
// 	printf("======== strstr ========\n");
// 	printf("%s\n", strstr("hello !", "lo"));
// }

// static void	test_atoi(void)
// {
// 	printf("======== ft_atoi ========\n");
// 	printf("%d\n", ft_atoi("-42"));
// 	printf("======== atoi ========\n");
// 	printf("%d\n", atoi("-42"));
// }

// static void	test_calloc(void)
// {
// 	int	i = 0;
// 	int	*p1;
// 	int	*p2;
// 	p1 = ft_calloc(4, sizeof(int));
// 	p2 = ft_calloc(4, sizeof(int));
// 	printf("======== ft_calloc ========\n");
// 	if (p1 == NULL)
// 		printf("Error! memory not allocated.");
// 	while (i < 4)
// 	{
// 		printf("[%d]", p1[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("======== calloc ========\n");
// 	if (p2 == NULL)
// 		printf("Error! memory not allocated.");
// 	i = 0;
// 	while (i < 4)
// 	{
// 		printf("[%d]", p2[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(p1);
// 	free(p2);
// }

// static void	test_strdup(void)
// {
// 	printf("======== ft_strdup ========\n");
// 	char	*str = "hello fati";
// 	char	*p1 = ft_strdup(str);
// 	char	*p2 = strdup(str);
// 	printf("[%p] %s\n", (void *)str, str);
// 	printf("[%p] %s\n", (void *)p1, p1);
// 	printf("======== strdup ========\n");
// 	printf("[%p] %s\n", (void *)str, str);
// 	printf("[%p] %s\n", (void *)p2, p2);
// 	free(p1);
// 	free(p2);
// }

// static void	test_substr(void)
// {
// 	printf("======== ft_substr ========\n");
// 	char str[] = "hello fati";
// 	char 	*sub = ft_substr(NULL, 6, 4);
// 	if (!sub)
// 	{
// 		printf("NULL\n");
// 		return ;
// 	}
// 	printf("[%p] %s\n", (void *)str, str);
// 	printf("[%p] %s\n", (void *)sub, sub);
// 	free(sub);
// }

// static void	test_strjoin(void)
// {
// 	printf("======== ft_strjoin ========\n");
// 	// char	*s1 = "hello ";
// 	char	*s2 = "fati";
// 	char	*join = ft_strjoin(NULL, s2);
// 	if (!join)
// 	{
// 		printf("NULL\n");
// 		return ;
// 	}
// 	// printf("s1: %s\n", s1);
// 	printf("s2: %s\n", s2);
// 	printf("s1 + s2: %s\n", join);
// 	free(join);
// }

// static void	test_strtrim(void)
// {
// 	printf("======== ft_strtrim ========\n");
// 	char	*str = ". hello .";
// 	char	*set = ". ";
// 	char	*trim = ft_strtrim(str, set);
// 	if (!trim)
// 	{
// 		printf("NULL\n");
// 		return ;
// 	}
// 	printf("%s\n", str);
// 	printf("%s\n", trim);
// 	free(trim);
// }

// static void	test_split(void)
// {
// 	printf("======== ft_split ========\n");
// 	char	*str = " hello fati how are you ";
// 	char	**arr;
// 	int	a;
// 	arr = ft_split(str, ' ');
// 	if (!arr)
// 	{
// 		printf("NULL");
// 		return ;
// 	}
// 	a = 0;
// 	while (arr[a])
// 	{
// 		printf("[%d] %s\n", a, arr[a]);
// 		free(arr[a]);
// 		a++;
// 	}
// 	printf("%d words\n", a);
// 	free(arr);
// }

// static void	test_itoa(void)
// {
// 	printf("======== ft_itoa ========\n");
// 	char	*str1 = ft_itoa(490);
// 	char	*str2 = ft_itoa(-2147483648);
// 	char	*str3 = ft_itoa(-42);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	printf("%s\n", str3);
// 	free(str1);
// 	free(str2);
// 	free(str3);
// }

// static char	evenupper(unsigned int i, char c)
// {
// 	if ((i % 2 == 0) && (c >= 'a' && c <= 'z'))
// 		c = ft_toupper(c);
// 	return (c);
// }

// static void	test_strmapi(void)
// {
// 	printf("======== ft_strmapi ========\n");
// 	char	*str = "hello fati";
// 	char	*new;
// 	new = ft_strmapi(str, evenupper);
// 	printf("str = %s\n", str);
// 	printf("new = %s\n", new);
// 	free(new);
// }

// static void	oddupper(unsigned int i, char *c)
// {
// 	if ((i % 2 != 0) && (*c >= 'a' && *c <= 'z'))
// 		*c = ft_toupper(*c);
// }

// static void	test_striteri(void)
// {
// 	printf("======== ft_striteri ========\n");
// 	char	str[] = "hello fati";
// 	printf("[%p] -> %s\n", (void *)str, str);
// 	ft_striteri(str, oddupper);
// 	printf("[%p] -> %s\n", (void *)str, str);
// }

// static void	test_putchar_fd(void)
// {
// 	printf("======== ft_putchar_fd ========\n");
// 	ft_putchar_fd('A', 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putchar_fd('4', 1);
// 	ft_putchar_fd('2', 1);
// 	ft_putchar_fd('\n', 1);
// }

// static void	test_putstr_fd(void)
// {
// 	printf("======== ft_putstr_fd ========\n");
// 	ft_putstr_fd("hello fati", 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putstr_fd("salaaaaaaam", 1);
// 	ft_putchar_fd('\n', 1);
// }

// static void	test_putendl_fd(void)
// {
// 	printf("======== ft_putendl_fd ========\n");
// 	ft_putendl_fd("hello fati", 1);
// 	ft_putendl_fd("", 1);
// 	ft_putendl_fd("last line", 1);
// }

// static void	test_putnbr_fd(void)
// {
// 	printf("======== ft_putnbr_fd ========\n");
// 	ft_putnbr_fd(0, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(42, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-42, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(INT_MAX, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(INT_MIN, 1);
// 	ft_putchar_fd('\n', 1);
// }

static void	test_lstnew(void)
{
	printf("======== ft_lstnew ========\n");
	t_list	*node;
	char	*str = "hello";
	node = ft_lstnew(str);
	if (!node)
	{
		printf("NULL\n");
		return ;
	}
	printf("%s\n", (char *)node->content);
	printf("%p\n", (void *)node->next);
	free(node);
}

int	main(void)
{
	// printf("======== Part 1 libc functions ========\n");
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
	// printf("\n");
	// printf("======== Part 2 additional functions ========\n");
	// test_substr();
	// printf("\n");
	// test_strjoin();
	// printf("\n");
	// test_strtrim();
	// printf("\n");
	// test_split();
	// printf("\n");
	// test_itoa();
	// printf("\n");
	// test_strmapi();
	// printf("\n");
	// test_striteri();
	// printf("\n");
	// test_putchar_fd();
	// printf("\n");
	// test_putstr_fd();
	// printf("\n");
	// test_putendl_fd();
	// printf("\n");
	// test_putnbr_fd();
	// printf("\n");
	printf("======== Part 3 linked list functions ========\n");
	test_lstnew();

	return (0);
}