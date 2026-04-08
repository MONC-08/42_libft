#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include<string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    if(!dst && !src)
        return NULL;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;

    if(d > s)
    {
        while(len > 0)
        {
            d[len - 1] = s[len - 1];
            len--;
        }
    }
    else
    {
        i = 0;
        while(i < len)
        {
            d[i] = s[i];
            i++;
        }
    }

    return dst;
}

// int main()
// {
//     char s1[20] = "abcdef";
//     char s2[20] = "abcdef";

//     printf("=== BEFORE ===\n");
//     printf("s1: %s\n", s1);
//     printf("s2: %s\n", s2);

//     // 🔹 Overlapping test
//     ft_memmove(s1 + 2, s1, 4);
//     memmove(s2 + 2, s2, 4); // real one for comparison

//     printf("\n=== AFTER (overlap copy) ===\n");
//     printf("ft_memmove: %s\n", s1);
//     printf("memmove   : %s\n", s2);

//     // 🔹 Normal copy test
//     char src[] = "Hello";
//     char dest1[10];
//     char dest2[10];

//     ft_memmove(dest1, src, 6);
//     memmove(dest2, src, 6);

//     printf("\n=== NORMAL COPY ===\n");
//     printf("ft_memmove: %s\n", dest1);
//     printf("memmove   : %s\n", dest2);

//     return 0;
// }