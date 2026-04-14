/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 00:59:49 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 00:59:49 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Allocates memory for an array
// Initializes all bytes to 0

void *ft_calloc(size_t count, size_t size)
{
	void *ptr;

	ptr = (void*)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count);
	return (ptr);
}

// int main()
// {
//     int *arr;
//     size_t i;

//     arr = (int *)ft_calloc(5, sizeof(int));
//     if (!arr)
//     {
//         printf("Allocation failed\n");
//         return (1);
//     }

//     // print values (should all be 0)
//     i = 0;
//     while (i < 5)
//     {
//         printf("arr[%d] = %d\n", i, arr[i]);
//         i++;
//     }

//     free(arr);
// }