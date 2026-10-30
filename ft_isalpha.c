/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:43:20 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/30 23:46:16 by fati             ###   ########.fr       */
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