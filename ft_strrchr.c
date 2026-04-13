#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include<string.h>

// ft_strrchr does almost the same thing as ft_strchr, but, It finds the last occurrence of a character in a string.

char *ft_strrchr(const char *s, int c)
{
    const char *p = s + ft_strlen(s);

    while (p >= s)
    {
        if (*p == (char)c)
            return ((char *)p);
        p--;
    }
    return (NULL); 
}

// int main()
// {
//     char *str = "hello world";
//     char *res;

//     // Test 1: character exists
//     res = ft_strrchr(str, 'o');
//     if (res)
//         printf("Last 'o': %s\n", res);
//     else
//         printf("'o' not found\n");

//     // Test 2: character does not exist
//     res = ft_strrchr(str, 'z');
//     if (res)
//         printf("Last 'z': %s\n", res);
//     else
//         printf("'z' not found\n");

//     // Test 3: search for '\0'
//     res = ft_strrchr(str, '\0');
//     if (res)
//         printf("Found '\\0' at end: %s\n", res);

// }