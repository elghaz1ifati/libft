/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 22:45:52 by fati              #+#    #+#             */
/*   Updated: 2026/09/25 17:09:12 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_p;
	const unsigned char	*src_p;

	if (!src && !dst)
		return (dst);
	dst_p = (unsigned char *)dst;
	src_p = (const unsigned char *)src;
	if (src_p > dst_p)
	{
		while (len > 0)
		{
			*dst_p++ = *src_p++;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*(dst_p + len - 1) = *(src_p + len - 1);
			len--;
		}
	}
	return (dst);
}
