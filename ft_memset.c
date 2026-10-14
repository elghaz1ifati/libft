/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:21:34 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/14 13:49:21 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t byte)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (byte > 0)
	{
		*p = (unsigned char)value;
		p++;
		byte--;
	}
	return (ptr);
}
