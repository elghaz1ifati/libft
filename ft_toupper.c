/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:04:49 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/26 12:03:46 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("\n===== ft_tolower =====\n");
// 	printf("test ['A']: expected ['a'] got ['%c']\n", ft_tolower('A'));
// 	printf("test ['Z']: expected ['z'] got ['%c']\n", ft_tolower('Z'));
// 	printf("test ['m']: expected ['m'] got ['%c']\n", ft_tolower('m'));
// 	printf("test ['5']: expected ['5'] got ['%c']\n", ft_tolower('5'));
// 	printf("test [' ']: expected [' '] got ['%c']\n", ft_tolower(' '));
// 	return (0);
// }