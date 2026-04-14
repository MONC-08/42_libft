/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:03:55 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:03:55 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include<string.h>

// It compares two strings up to n characters
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        if (s1[i] == '\0')
            return (0);
        i++;
    }
    return (0);
}

// int main()
// {
//     // Test 1: same strings
//     printf("Test 1: %d\n", ft_strncmp("hello", "hello", 5));

//     // Test 2: difference in middle
//     printf("Test 2: %d\n", ft_strncmp("hello", "hezlo", 5));

//     // Test 3: first string smaller
//     printf("Test 3: %d\n", ft_strncmp("abc", "abd", 3));

//     // Test 4: second string longer
//     printf("Test 4: %d\n", ft_strncmp("abc", "abcd", 4));

//     // Test 5: compare only part (n limit)
//     printf("Test 5: %d\n", ft_strncmp("abcdef", "abczzz", 3));

//     // Test 6: n = 0 (edge case)
//     printf("Test 6: %d\n", ft_strncmp("hello", "world", 0));

// }