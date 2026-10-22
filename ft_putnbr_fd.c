/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:42:15 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/22 11:17:08 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}

// if (n == -2147483648)
	// {
	// 	ft_putstr_fd("-21", fd);
	// 	ft_putnbr_fd(47483648, fd);
	// 	return ;
	// }
// int	main()
// {
// 	ft_putnbr_fd(-143,1);
// 	ft_putchar_fd('\n', 1);
// }