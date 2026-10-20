/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 14:25:42 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/20 16:12:21 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//calloc is a function allocate space in memory and initialised it by 0
//returns null if space is not enough to allocate

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (size != 0 && num > ((size_t)-1 / size))
		return (NULL);
	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
// #include <stdio.h>
// int main()
// {
// 	int	i = 0;
// 	int	*ptr = ft_calloc((size_t)-1, sizeof(int));
// 	if (!ptr)
// 	{
// 		printf("Allocation failed\n");
// 		return (0);
// 	}
// 	while (i < 3)
// 	{
// 		printf ("index [%d] Address [%p] Value [%d]\n", i, &ptr[i], ptr[i]);
// 		i++;
// 	}
// 	free(ptr);
// }