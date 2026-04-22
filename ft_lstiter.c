/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:51:03 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/22 00:51:03 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Iterates through the list ’lst’ and applies the
// function ’f’ to the content of each node

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;

	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// -------------------------------------------------------------

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// /* Function to apply to each node */
// void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// /* Helper to create a new node */
// t_list	*ft_new_node(void *content)
// {
// 	t_list	*node;

// 	node = malloc(sizeof(t_list));
// 	if (!node)
// 		return (NULL);
// 	node->content = content;
// 	node->next = NULL;
// 	return (node);
// }

// /* Helper to add node at the end */
// void	ft_add_back(t_list **lst, t_list *new)
// {
// 	t_list	*temp;

// 	if (!*lst)
// 	{
// 		*lst = new;
// 		return;
// 	}
// 	temp = *lst;
// 	while (temp->next)
// 		temp = temp->next;
// 	temp->next = new;
// }

// int	main(void)
// {
// 	t_list	*list;

// 	list = NULL;

// 	ft_add_back(&list, ft_new_node(strdup("Hello")));
// 	ft_add_back(&list, ft_new_node(strdup("42")));
// 	ft_add_back(&list, ft_new_node(strdup("libft")));

// 	ft_lstiter(list, print_content);

// 	return (0);
// }