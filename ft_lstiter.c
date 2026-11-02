/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatel-gh <fatel-gh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:31:22 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/02 20:48:06 by fatel-gh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
// #include <stdio.h>
// static void	convertupper(void *content)
// {
// 	char	*str;
// 	int	i = 0;
// 	str = (char *)content;
// 	while (str[i])
// 	{
// 		if (ft_isalpha(str[i]) && str[i] >= 'a' && str[i] <= 'z')
// 		str[i] -= 32;
// 		i++;
// 	}
// }
// int	main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	node1 = ft_lstnew(ft_strdup("hello2"));
// 	node2 = ft_lstnew(ft_strdup("world"));
// 	if (!node1 || !node2)
// 		return (1);
// 	node1->next = node2;
// 	printf("Before: %s %s\n", (char *)node1->content, (char *)node2->content);
// 	ft_lstiter(node1, convertupper);
// 	printf("Before: %s %s\n", (char *)node1->content, (char *)node2->content);
// 	ft_lstclear(&node1, free);
// }
