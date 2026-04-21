/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:29:53 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/22 00:29:53 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Takes a node as parameter and frees its content using the function ’del’. 
// Free the node itself but does NOT free the next node.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// -----------------------------------------------------------

// #include <stdio.h>
// #include <stdlib.h>

// void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list *node;

// 	// allocate memory for content
// 	node = ft_lstnew(malloc(10));
// 	if (!node)
// 		return (1);

// 	// put something inside
// 	sprintf((char *)node->content, "Hello");

// 	printf("Before deletion: %s\n", (char *)node->content);

// 	// delete node
// 	ft_lstdelone(node, del);

// 	printf("Node deleted\n");

// 	return (0);
// }