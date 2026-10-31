/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:02:06 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/31 01:35:50 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del && lst->content)
		del(lst->content);
	free(lst);
}

// #include <stdio.h>
// static void	del_content(void *content)
// {
// 	free(content);
// }
// int	main(void)
// {
// 	t_list	*node;
// 	node = ft_lstnew(ft_strdup("hello"));
// 	if (!node)
// 	{
// 		printf("NULL A FATI\n");
// 		return (1);
// 	}
// 	printf("Before deletion: %s\n", (char *)node->content);
// 	ft_lstdelone(node, del_content);
// 	printf("Node deleted successfully\n");
// }