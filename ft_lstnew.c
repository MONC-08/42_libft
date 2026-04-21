/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:19:52 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/21 13:19:52 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// It’s used to create a new node in a linked list
t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(*list));
	if (!list)
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

// ---------------------------------------------------------

// int	main()
// {
// 	t_list	*node;
// 	char	*str = "Hello, Libft!";

// 	// create new node
// 	node = ft_lstnew(str);
// 	if (!node)
// 	{
// 		printf("Allocation failed\n");
// 		return (1);
// 	}

// 	// print values
// 	printf("Content: %s\n", (char *)node->content);
// 	printf("Next: %p\n", (void *)node->next);

// 	// free memory
// 	free(node);

// 	return (0);
// }