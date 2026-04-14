/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:01:23 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:01:23 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include<string.h>

// ft_memcmp compares two blocks of memory byte by byte, for a given number of bytes n
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1;
    const unsigned char *p2;

    p1 = (const unsigned char *)s1;
    p2 = (const unsigned char *)s2;

    while (n--)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);
        p1++;
        p2++;
    }
    return (0);
}

// int main()
// {
//     // Test 1: identical memory
//     printf("Test 1: %d\n", ft_memcmp("hello", "hello", 5));

//     // Test 2: difference in middle
//     printf("Test 2: %d\n", ft_memcmp("hello", "hezlo", 5));

//     // Test 3: first string smaller
//     printf("Test 3: %d\n", ft_memcmp("abc", "abd", 3));

//     // Test 4: second string smaller
//     printf("Test 4: %d\n", ft_memcmp("abe", "abd", 3));

//     // Test 5: partial comparison (n limits)
//     printf("Test 5: %d\n", ft_memcmp("abcdef", "abczzz", 3));

//     // Test 6: binary data test
//     char a[] = {1, 2, 3};
//     char b[] = {1, 2, 4};
//     printf("Test 6: %d\n", ft_memcmp(a, b, 3));

// }