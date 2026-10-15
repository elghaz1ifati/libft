/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:04:49 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/15 14:31:21 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('-'));
// 	printf("%c\n", toupper('a'));
// 	printf("%d\n", toupper('\0'));
// }