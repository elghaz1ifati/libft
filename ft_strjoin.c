/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 18:38:06 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/20 19:01:40 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		s1_len;
	int		s2_len;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = malloc ((s1_len + s2_len) + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, s1_len);
	ft_memcpy(join + s1_len, s2, s2_len + 1);
	return (join);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*str[3] = {"hello", "fati"};
// 	char	*join;
// 	int		i;
// 	i = 0;
// 	while (i < 2)
// 	{
// 		printf("[%d] %s\n", i, str[i]);
// 		i++;
// 	}
// 	join = ft_strjoin(str[0], str[1]);
// 	if (!join)
// 		return (1);
// 	printf("joined: %s \n", join);
// 	free(join);
// 	return (0);
// }