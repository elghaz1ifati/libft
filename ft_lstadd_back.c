/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:45:33 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/22 15:59:38 by fatel-gh         ###   ########.fr       */
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
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;
// 	t_list	*lst;
// 	t_list	*empty;
// 	t_list	*current;
// 	t_list	*x;
// 	a = ft_lstnew("a");
// 	b = ft_lstnew("b");
// 	c = ft_lstnew("c");
// 	a->next = b;
// 	b->next = NULL;
// 	lst = a;
// 	ft_lstadd_back(&lst, c);
// 	current = lst;
// 	while (current)
// 	{
// 		printf("%s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	empty = NULL;
// 	x = ft_lstnew("x");
// 	ft_lstadd_back(&empty, x);
// 	printf("Empty list test: %s\n", (char *)empty->content);
// 	free(a);
// 	free(b);
// 	free(c);
// 	free(x);
// }