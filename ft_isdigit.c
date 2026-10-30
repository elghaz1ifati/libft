/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:52:52 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/30 23:46:44 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include  <stdio.h>
// int	main()
// {
// 	printf("\n===== ft_isdigit =====\n");
// 	printf("test ['0']: expected [1] got [%d]\n", ft_isdigit('0'));
// 	printf("test ['9']: expected [1] got [%d]\n", ft_isdigit('9'));
// 	printf("test ['a']: expected [0] got [%d]\n", ft_isdigit('a'));
// 	printf("test ['/']: expected [0] got [%d]\n", ft_isdigit('/'));
// 	printf("test [10]: expected [0] got [%d]\n", ft_isdigit(10));
// 	return (0);
// }