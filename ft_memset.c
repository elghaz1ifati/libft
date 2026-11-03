/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:21:34 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/03 12:01:40 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t byte)
{
	unsigned char	*b;
	size_t			index;

	b = (unsigned char *)ptr;
	index = 0;
	while (index < byte)
	{
		b[index] = (unsigned char)value;
		index++;
	}
	return (ptr);
}
