/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:48:37 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/21 16:28:09 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, int c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	*free_all(char **result, int j)
{
	while (j > 0)
		free(result[--j]);
	free (result);
	return (NULL);
}

static char	**fill_word(const char *s, int c, char **result, int words_count)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (j < words_count)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		result[j] = ft_substr(s, start, i - start);
		if (!result[j])
			return (free_all(result, j));
		j++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		words_count;

	if (!s)
		return (NULL);
	words_count = count_words(s, c);
	result = malloc(sizeof (char *) * (words_count + 1));
	if (!result)
		return (NULL);
	return (fill_word(s, c, result, words_count));
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	**result;
// 	int		i;
// 	result = ft_split("   hello world cv bien   ", ' ');
// 	i = 0;
// 	while (result && result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }