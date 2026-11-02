/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:42:15 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/02 20:41:09 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	long	div;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	div = 1;
	while ((nb / div) >= 10)
		div = div * 10;
	while (div > 0)
	{
		ft_putchar_fd((nb / div) + '0', fd);
		nb = nb % div;
		div = div / 10;
	}
}

// int	main()
// {
// 	ft_putnbr_fd(-42,1);
// 	ft_putchar_fd('\n', 1);
// }