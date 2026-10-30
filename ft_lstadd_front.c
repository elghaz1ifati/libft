/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:37:38 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/31 00:45:38 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*lst;
// 	node1 = ft_lstnew("hello");
// 	node2 = ft_lstnew("world");
// 	lst = node1;
// 	ft_lstadd_front(&lst, node2);
// 	int i = 1;
// 	while (lst)
// 	{
// 		printf("node [%d] -> content [%s]\n", i,(char *)lst->content);
// 		lst = lst->next;
// 		i++;
// 	}
// 	free(node1);
// 	free(node2);
// }
// [node2 | next] → [node1 | next] → NULL