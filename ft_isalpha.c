/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:43:20 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/26 12:02:36 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	printf("===== ft_isalpha =====\n");
// 	printf("test ['A']: expected [1] got [%d]\n", ft_isalpha('A'));
// 	printf("test ['z']: expected [1] got [%d]\n", ft_isalpha('z'));
// 	printf("test ['5']: expected [0] got [%d]\n", ft_isalpha('5'));
// 	printf("test [' ']: expected [0] got [%d]\n", ft_isalpha(' '));
// 	printf("test [0]: expected [0] got [%d]\n", ft_isalpha(0));
// 	return(0);
// }