#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include<string.h>

// ft_strnstr searches for a substring inside a string, but only within the first len characters
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (*needle == '\0')
        return ((char *)haystack);

    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;

        while (haystack[i + j] && needle[j] && (i + j) < len && haystack[i + j] == needle[j])
        {
            j++;
        }

        if (needle[j] == '\0')
            return ((char *)(haystack + i));

        i++;
    }
    return (NULL);
}

// int main()
// {
//     char *str = "hello world";

//     char *res;

//     // Test 1: normal match
//     res = ft_strnstr(str, "world", 11);
//     if (res)
//         printf("Test 1: %s\n", res);
//     else
//         printf("Test 1: not found\n");

//     // Test 2: partial match (should fail due to len)
//     res = ft_strnstr(str, "world", 5);
//     if (res)
//         printf("Test 2: %s\n", res);
//     else
//         printf("Test 2: not found\n");

//     // Test 3: needle at start
//     res = ft_strnstr(str, "hello", 5);
//     if (res)
//         printf("Test 3: %s\n", res);
//     else
//         printf("Test 3: not found\n");

//     // Test 4: empty needle
//     res = ft_strnstr(str, "", 11);
//     printf("Test 4: %s\n", res);

//     // Test 5: not existing
//     res = ft_strnstr(str, "abc", 11);
//     if (res)
//         printf("Test 5: %s\n", res);
//     else
//         printf("Test 5: not found\n");

// }