/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:15:50 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/10/22 15:26:26 by fatel-gh         ###   ########.fr       */
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
// int	main(void)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;
// 	t_list	*lst;
// 	a = ft_lstnew("a");
// 	b = ft_lstnew("b");
// 	c = ft_lstnew("c");
// 	a->next = b;
// 	b->next = c;
// 	lst = a;
// 	printf("Size: %d\n", ft_lstsize(lst));
// 	printf("Empty list size: %d\n", ft_lstsize(NULL));
// 	free(a);
// 	free(b);
// 	free(c);
// 	return (0);
// }