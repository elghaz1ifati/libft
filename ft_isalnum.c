/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:25:58 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/30 23:46:25 by fati             ###   ########.fr       */
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