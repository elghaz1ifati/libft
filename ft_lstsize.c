/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:15:50 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/31 00:59:00 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// #include <stdio.h>
// int	main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*lst;
// 	node1 = ft_lstnew("Hello");
// 	node2 = ft_lstnew("BOnjour");
// 	node3 = ft_lstnew("Holla");
// 	node1->next = node2;
// 	node2->next = node3;
// 	lst = node1;
// 	printf("Size: %d\n", ft_lstsize(lst));
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	return (0);
// }