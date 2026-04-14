/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:01:41 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:01:41 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"
#include<string.h>

// memcpy - copies a block of memory from a source to a destination.

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    if(!dst && !src)
        return NULL;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;

    while (n--)
        *d++ = *s++;

    return dst;
}


// int main(void)
// {
//     char src[] = "Hello World!";
//     char dst1[50];
//     char dst2[50];

//     // Normal copy test
//     ft_memcpy(dst1, src, sizeof(src));
//     memcpy(dst2, src, sizeof(src));

//     printf("=== NORMAL COPY ===\n");
//     printf("ft_memcpy: %s\n", dst1);
//     printf("memcpy   : %s\n", dst2);

//     // Partial copy test
//     ft_memcpy(dst1, src, 5);
//     dst1[5] = '\0';

//     memcpy(dst2, src, 5);
//     dst2[5] = '\0';

//     printf("\n=== PARTIAL COPY (5 bytes) ===\n");
//     printf("ft_memcpy: %s\n", dst1);
//     printf("memcpy   : %s\n", dst2);

//     // Overlapping test (undefined behavior)
//     char s1[20] = "abcdef";
//     char s2[20] = "abcdef";

//     ft_memcpy(s1 + 2, s1, 4);
//     memcpy(s2 + 2, s2, 4);

//     printf("\n=== OVERLAP TEST (UNDEFINED) ===\n");
//     printf("ft_memcpy: %s\n", s1);
//     printf("memcpy   : %s\n", s2);

//     return 0;
// }
