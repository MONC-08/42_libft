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


// int main()
// {
//     char dst[100] = "Libc is";
//     char src[100] = "the standard library.";

//     ft_memcpy(dst, src, sizeof(src));
//     printf("dst after memcpy(): %s\n", dst);
//     return 0;
// }
