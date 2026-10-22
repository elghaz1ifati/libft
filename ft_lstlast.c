/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:28:58 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/22 15:39:50 by fatel-gh         ###   ########.fr       */
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
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;
// 	t_list	*last;
// 	a = ft_lstnew("a");
// 	b = ft_lstnew("b");
// 	c = ft_lstnew("c");
// 	a->next = b;
// 	b->next = c;
// 	last = ft_lstlast(a);
// 	if (last)
// 		printf("Last node: %s\n", (char *)last->content);
// 	printf("Empty list: %p\n", (void *)ft_lstlast(NULL));
// 	free(a);
// 	free(b);
// 	free(c);
// }