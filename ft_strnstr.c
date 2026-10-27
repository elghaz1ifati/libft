/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 15:24:40 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/27 21:11:21 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *instr, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*instr)
		return ((char *)str);
	i = 0;
	while (i < len && str[i])
	{
		j = 0;
		while (instr[j] && (i + j) < len
			&& str[i + j] == instr [j])
			j++;
		if (instr [j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main()
// {
// 	char	*str = "hello world";
// 	char	*instr = "s";
// 	char	*nstr = ft_strnstr(str, instr, 12);
// 	if (nstr == NULL)
// 		printf("WA KHTI WAAAAAKHTI NULL AKHTI\n");
// 	else 
// 		printf("[%p] %s\n",nstr, nstr);
// }