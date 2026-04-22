/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:52:30 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/22 00:52:30 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates through the list ’lst’, applies the
// function ’f’ to each node’s content, and creates
// a new list resulting of the successive applications
// of the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);

	newlst = NULL;

	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, node);
		lst = lst->next;
	}
	return (newlst);
}

// --------------------------------------------------------------------------------

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// /* Function applied to each element */
// void	*to_upper_str(void *str)
// {
// 	char	*s;
// 	int		i;
// 	char	*new_str;

// 	s = (char *)str;
// 	new_str = strdup(s);
// 	if (!new_str)
// 		return (NULL);

// 	i = 0;
// 	while (new_str[i])
// 	{
// 		if (new_str[i] >= 'a' && new_str[i] <= 'z')
// 			new_str[i] -= 32;
// 		i++;
// 	}
// 	return (new_str);
// }

// /* del function (used if something fails) */
// void	del_content(void *content)
// {
// 	free(content);
// }

// /* print helper */
// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// /* helper to create node */
// t_list	*new_node(void *content)
// {
// 	t_list	*node;

// 	node = ft_lstnew(content);
// 	return (node);
// }

// /* helper add back */
// void	add_back(t_list **lst, t_list *new)
// {
// 	t_list	*tmp;

// 	if (!*lst)
// 	{
// 		*lst = new;
// 		return;
// 	}
// 	tmp = *lst;
// 	while (tmp->next)
// 		tmp = tmp->next;
// 	tmp->next = new;
// }

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*mapped;

// 	list = NULL;

// 	add_back(&list, new_node(strdup("hello")));
// 	add_back(&list, new_node(strdup("world")));
// 	add_back(&list, new_node(strdup("libft")));

// 	mapped = ft_lstmap(list, to_upper_str, del_content);

// 	printf("Original list:\n");
// 	ft_lstiter(list, print_content);

// 	printf("\nMapped list:\n");
// 	ft_lstiter(mapped, print_content);

// 	return (0);
// }