/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 21:56:52 by fati              #+#    #+#             */
/*   Updated: 2026/10/21 15:11:17 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
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
	free(result);
	return (NULL);
}

static char	**fill_words(char const *s, char c, char **result, int words_count)
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

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words_count;

	if (!s)
		return (NULL);
	words_count = count_words(s, c);
	result = malloc(sizeof(char *) * (words_count + 1));
	if (!result)
		return (NULL);
	return (fill_words(s, c, result, words_count));
}
