/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fati <fati@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:37:40 by fatel-gh          #+#    #+#             */
/*   Updated: 2026/11/02 20:03:04 by fati             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			if (content)
				del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// #include <stdio.h>
// static void	*convertupper(void *content)
// {
// 	char	*src = (char *)content;
// 	char	*dest = ft_strdup(src);
// 	int	i = 0;
// 	if (!dest)
// 		return (NULL);
// 	while (dest[i])
// 	{
// 		if (dest[i] >= 'a' && dest[i] <= 'z')
// 			dest[i] -= 32;
// 		i++;
// 	}
// 	return (dest);
// }
// static void	del_content(void *content)
// {
// 	free(content);
// }
// static	void	printlist(t_list *lst)
// {
// 	while(lst)
// 	{
// 		printf("[%s] ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }
// int	main()
// {
// 	t_list	*lst;
// 	t_list	*new_list;
// 	lst = ft_lstnew(ft_strdup("hello"));
// 	if (!lst)
// 		return (1);
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("world")));
// 	printf("Original list: ");
// 	printlist(lst);
// 	new_list = ft_lstmap(lst, convertupper, del_content);
// 	if (!new_list)
// 	{
// 		ft_lstclear(&lst, del_content);
// 		return (1);
// 	}
// 	printf("Mapped list: ");
// 	printlist(new_list);
// 	ft_lstclear(&lst, del_content);
// 	ft_lstclear(&new_list, del_content);
// }
