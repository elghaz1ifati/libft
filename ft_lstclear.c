/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:12:00 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/02 20:52:54 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

// #include <stdio.h>
// static void	del_content(void *content)
// {
// 	free(content);
// }
// int	main()
// {
// 	t_list	*lst;
// 	t_list	*node1;
// 	t_list	*node2;
// 	node1 = ft_lstnew("hi fatel-gh");
// 	node2 = ft_lstnew("hi again");
// 	if (!node1)
// 	{
// 		printf("NULL");
// 		return (1);
// 	}
// 	lst = node1;
// 	ft_lstadd_back(&lst, node2);
// 	if (!node2)
// 	{
// 		printf("NULL");
// 		return (1);
// 	}
// 	int	i = 1;
// 	printf("before lstclear: \n");
// 	while (lst)
// 	{
// 		printf("node [%d] -> content [%s]\n", i , (char *)lst->content);
// 			lst = lst->next;
// 			i++;
// 	}
// 	ft_lstclear(&lst, del_content);
// 	printf("Deleted successfully\n");
// 	free(node1);
// 	free(node2);
// }