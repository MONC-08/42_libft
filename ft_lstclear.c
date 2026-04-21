/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:39:30 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/22 00:39:30 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Deletes and frees the given node and all its
// successors, using the function ’del’ and free(3)
// Finally, set the pointer to the list to NULL


#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

// ----------------------------------------------------------

// #include <stdio.h>
// #include <stdlib.h>

// void	del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list *lst = NULL;

// 	// create list
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("A")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("B")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("C")));

// 	// print before clearing
// 	t_list *tmp = lst;
// 	printf("Before clear:\n");
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}

// 	// clear list
// 	ft_lstclear(&lst, del);

// 	// check after clear
// 	if (!lst)
// 		printf("List is NULL after clear\n");

// 	return (0);
// }