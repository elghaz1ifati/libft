/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:48:37 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/28 17:18:42 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i] && str[i] != sep)
			count++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (count);
}

static void	*free_on_error(char **arr, int a)
{
	while (a > 0)
		free(arr[--a]);
	free (arr);
	return (NULL);
}

static char	**fill_word(const char *str, int sep, char **arr, int count)
{
	int	s;
	int	a;
	int	start;

	s = 0;
	a = 0;
	while (a < count)
	{
		while (str[s] && str[s] == sep)
			s++;
		start = s;
		while (str[s] && str[s] != sep)
			s++;
		arr[a] = ft_substr(str, start, s - start);
		if (!arr[a])
			return (free_on_error(arr, a));
		a++;
	}
	arr[a] = NULL;
	return (arr);
}

char	**ft_split(const char *str, char sep)
{
	char	**arr;
	int		count;

	if (!str)
		return (NULL);
	count = count_words(str, sep);
	arr = malloc(sizeof (char *) * (count + 1));
	if (!arr)
		return (NULL);
	return (fill_word(str, sep, arr, count));
}

// #include <stdio.h>
// int	main()
// {
// 	char	**arr;
// 	int	a;
// 	int	i;
// 	arr = ft_split("   hello world cv bien   ", ' ');
// 	a = 0;
// 	while (arr && arr[a])
// 	{
// 		printf("[%d]->",a);
// 		i = 0;
// 		while (arr[a][i])
// 		{
// 			printf("[%c]", arr[a][i]);
// 			i++;
// 		}
// 		printf("[\\%d]",arr[a][i]);
// 		printf("\n");
// 		free(arr[a]);
// 		a++;
// 	}
// 	free(arr);
// 	return (0);
// }