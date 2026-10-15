/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:13:34 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/15 14:28:35 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main()
// {
// 	printf("%c\n", ft_tolower('A'));
// 	printf("%c\n", ft_tolower('-'));
// 	printf("%c\n", tolower('a'));
// 	printf("%d\n", tolower('\0'));
// }
