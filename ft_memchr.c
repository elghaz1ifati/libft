/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 23:32:34 by fati              #+#    #+#             */
/*   Updated: 2026/09/25 16:37:08 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	const unsigned char	*str_p;

	str_p = (const unsigned char *) str;
	while (len > 0)
	{
		if (*str_p == (unsigned char)c)
			return ((void *) str_p);
		str_p++;
		len--;
	}
	return (NULL);
}
