/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:48:35 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/31 01:14:32 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str;
// 	t_list *node;

// 	str = "hello";
// 	node = ft_lstnew(str);
// 	if (!node)
// 		printf("NULL");
// 	printf("Content: %s\n", (char *)node->content);
// 	printf("Next: %p\n", (void *)node->next);
// 	free(node);
// 	return (0);
// }