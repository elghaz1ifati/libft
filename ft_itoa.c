/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:33:42 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/29 16:32:55 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_digits(char *str, long nb, int len)
{
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = get_len(nb);
	str = malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	fill_digits(str, nb, len);
	return (str);
}

// #include <stdio.h>
// int	main()
// {
// 	size_t	i = 0;
// 	char	*itoa = ft_itoa(-234);
// 	while (ft_strlen(itoa) > i)
// 	{
// 		printf("[%c]", itoa[i]);
// 		i++;
// 	}
// 	printf("[\\%d]", itoa[i]);
// 	free (itoa);
// 	printf("\n");
// }