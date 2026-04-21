/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 00:20:35 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/22 00:20:35 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Adds the node new at the end of the list

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

// ----------------------------------------------------

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *head = NULL;
// 	t_list *tmp;

// 	// add elements to the back
// 	ft_lstadd_back(&head, ft_lstnew("A"));
// 	ft_lstadd_back(&head, ft_lstnew("B"));
// 	ft_lstadd_back(&head, ft_lstnew("C"));

// 	tmp = head;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}

// 	// free list
// 	while (head)
// 	{
// 		tmp = head->next;
// 		free(head);
// 		head = tmp;
// 	}

// 	return (0);
// }