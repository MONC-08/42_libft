/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:02:16 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/21 14:02:16 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// ft_lstsize Counts the number of nodes in the list

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// ----------------------------------------------------------------------------------------------------

// int	main(void)
// {
// 	t_list *head = NULL;
// 	t_list *tmp;

// 	ft_lstadd_front(&head, ft_lstnew("C"));
// 	ft_lstadd_front(&head, ft_lstnew("B"));
// 	ft_lstadd_front(&head, ft_lstnew("A"));

// 	printf("Size: %d\n", ft_lstsize(head));

// 	// free list
// 	while (head)
// 	{
// 		tmp = head->next;
// 		free(head);
// 		head = tmp;
// 	}

// 	return (0);
// }