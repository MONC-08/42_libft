/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 00:59:20 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 00:59:20 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include<string.h>

// creates a new copy of a string in dynamically allocated memory

char *ft_strdup(const char *s)
{
    char *dup;
    size_t i;
    size_t len;

    len = ft_strlen(s);

    dup = malloc(len + 1);
    if (!dup)
        return (NULL);

    i = 0;
    while (1)
    {
        dup[i] = s[i];
        if (s[i] == '\0')
            break ;
        i++;
    }
    return (dup);
}

// --------------------------------------------------------------
// int main()
// {
//     char *original;
//     char *copy;

//     original = "Hello 42!";
//     copy = ft_strdup(original);

//     if (!copy)
//     {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     // Basic test
//     printf("Original: %s\n", original);
//     printf("Copy    : %s\n", copy);

//     // Check independence
//     copy[0] = 'Y';
//     printf("\nAfter modifying copy:\n");
//     printf("Original: %s\n", original);
//     printf("Copy    : %s\n", copy);

//     // Check addresses (must be different)
//     printf("\nAddresses:\n");
//     printf("Original address: %p\n", (void *)original);
//     printf("Copy address    : %p\n", (void *)copy);

//     free(copy);
    
// }