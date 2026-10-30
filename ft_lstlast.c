/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:28:58 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/31 00:59:20 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*last;
// 	node1 = ft_lstnew("ana lwel");
// 	node2 = ft_lstnew("ana tani");
// 	node3 = ft_lstnew("ana akhir wahed");
// 	node1->next = node2;
// 	node2->next = node3;
// 	last = ft_lstlast(node1);
// 	if (last)
// 		printf("Last node: %s\n", (char *)last->content);
// 	free(node1);
// 	free(node2);
// 	free(node3);
// }