/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:18:11 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/21 14:18:11 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Parameters lst: The beginning of the list.
// Return Value Last node of the list

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// -----------------------------------------------

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *head = NULL;
// 	t_list *last;

// 	// create list: A -> B -> C
// 	ft_lstadd_front(&head, ft_lstnew("C"));
// 	ft_lstadd_front(&head, ft_lstnew("B"));
// 	ft_lstadd_front(&head, ft_lstnew("A"));

// 	// get last node
// 	last = ft_lstlast(head);

// 	if (last)
// 		printf("Last: %s\n", (char *)last->content);
// 	else
// 		printf("List is empty\n");

// 	return (0);
// }