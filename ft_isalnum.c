/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:25:58 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/26 12:03:02 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// int	main()
// {
// 	printf("\n===== ft_isalnum =====\n");
// 	printf("test ['A']: expected [1] got [%d]\n", ft_isalnum('A'));
// 	printf("test ['z']: expected [1] got [%d]\n", ft_isalnum('z'));
// 	printf("test ['5']: expected [1] got [%d]\n", ft_isalnum('5'));
// 	printf("test ['@']: expected [0] got [%d]\n", ft_isalnum('@'));
// 	printf("test [' ']: expected [0] got [%d]\n", ft_isalnum(' '));
// 	return (0);
// }