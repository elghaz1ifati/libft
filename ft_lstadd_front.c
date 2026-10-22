/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:37:38 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/22 14:14:25 by fatel-gh         ###   ########.fr       */
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
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*lst;
// 	a = ft_lstnew("hello");
// 	b = ft_lstnew("world");
// 	lst = a;
// 	ft_lstadd_front(&lst, b);
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	free(a);
// 	free(b);
// }
// [b | next] → [a | next] → NULL
//     node 1      node 2