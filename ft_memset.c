#include <stdio.h>
#include "libft.h"
#include<string.h>

void *ft_memset(void *ptr, int value, size_t len)
{
    char *p;
    p = (char *)ptr;
    while(len--)
    {
        *p = value;
        p++;
    }
    return ptr;
}

// int main()
// {
//     char s[] = "Hello world!";
//     ft_memset(s, '#', 4);
//     printf("%s", s);
// }