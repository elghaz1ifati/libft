/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:21:34 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/05 19:46:01 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t byte)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (byte--)
		*p++ = (unsigned char)value;
	return (ptr);
}
