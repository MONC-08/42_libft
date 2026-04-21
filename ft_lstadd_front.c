/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:47:18 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/21 13:47:18 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// lst: The address of a pointer to the first node of a list.
// new: The address of a pointer to the node to be added.

#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// ------------------------------------------------------------
// int	main(void)
// {
// 	t_list *head = NULL;
// 	t_list *tmp;

// 	ft_lstadd_front(&head, ft_lstnew("World"));
// 	ft_lstadd_front(&head, ft_lstnew("Hello"));

// 	printf("%s\n", (char *)head->content);
// 	printf("%s\n", (char *)head->next->content);

// 	// free memory properly
// 	while (head)
// 	{
// 		tmp = head->next;
// 		free(head);
// 		head = tmp;
// 	}

// 	return (0);
// }