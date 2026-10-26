/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:37:31 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/26 11:09:58 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("\n===== ft_isascii =====\n");
// 	printf("test [0]: expected [1] got [%d]\n", ft_isascii(0));
// 	printf("test ['A']: expected [1] got [%d]\n", ft_isascii('A'));
// 	printf("test [127]: expected [1] got [%d]\n", ft_isascii(127));
// 	printf("test [128]: expected [0] got [%d]\n", ft_isascii(128));
// 	printf("test [-1]: expected [0] got [%d]\n", ft_isascii(-1));
// 	return (0);
// }