/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:40:39 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/26 12:03:09 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("\n===== ft_isprint =====\n");
// 	printf("test [' ']: expected [1] got [%d]\n", ft_isprint(' '));
// 	printf("test ['A']: expected [1] got [%d]\n", ft_isprint('A'));
// 	printf("test ['~']: expected [1] got [%d]\n", ft_isprint('~'));
// 	printf("test [31]: expected [0] got [%d]\n", ft_isprint(31));
// 	printf("test [127]: expected [0] got [%d]\n", ft_isprint(127));
// 	return (0);
// }