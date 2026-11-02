/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:45:33 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/02 20:49:40 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// #include <stdio.h>
// int main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*lst;
// 	t_list	*empty;
// 	t_list	*only;
// 	node1 = ft_lstnew("ana awal wahed");
// 	node2 = ft_lstnew("ana tani");
// 	node3 = ft_lstnew("ana talet");
// 	node1->next = node2;
// 	node2->next = NULL;
// 	lst = node1;
// 	ft_lstadd_back(&lst, node3);
// 	int i = 1;
// 	while (lst)
// 	{
// 		printf("node [%d]->[%s]\n",i, (char *)lst->content);
// 		lst = lst->next;
// 		i++;
// 	}
// 	empty = NULL;
// 	only = ft_lstnew("I m the only one");
// 	ft_lstadd_back(&empty, only);
// 	printf("Empty list test : %s\n", (char *)empty->content);
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	free(only);
// }