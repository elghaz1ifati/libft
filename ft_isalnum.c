/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:25:58 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/15 13:36:09 by fatel-gh         ###   ########.fr       */
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
// 	printf("%d\n", ft_isalnum(48));
// 	printf("%d\n", ft_isalnum('a'));
// 	printf("%d\n", ft_isalnum('-'));
// }