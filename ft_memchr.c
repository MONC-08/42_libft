#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include<string.h>

// ft_memchr searches for a byte (character) inside a block of memory, not just a string.
void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;
    unsigned char uc;

    p = (const unsigned char *)s;
    uc = (unsigned char)c;

    while (n--)
    {
        if (*p == uc)
            return ((void *)p);
        p++;
    }
    return (NULL);
}

// int main()
// {
//     char arr[] = "hello world";
//     void *res;

//     // Test 1: character exists
//     res = ft_memchr(arr, 'o', 11);
//     if (res)
//         printf("Found 'o': %s\n", (char *)res);
//     else
//         printf("'o' not found\n");

//     // Test 2: character does not exist
//     res = ft_memchr(arr, 'z', 11);
//     if (res)
//         printf("Found 'z': %s\n", (char *)res);
//     else
//         printf("'z' not found\n");

//     // Test 3: find space
//     res = ft_memchr(arr, ' ', 11);
//     if (res)
//         printf("Found space: %s\n", (char *)res);

//     // Test 4: limit test (only first 5 bytes)
//     res = ft_memchr(arr, 'o', 5);
//     if (res)
//         printf("Found 'o' in first 5 bytes: %s\n", (char *)res);
//     else
//         printf("'o' NOT found in first 5 bytes\n");

// }