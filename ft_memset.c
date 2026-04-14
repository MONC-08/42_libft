#include <stdio.h>
#include "libft.h"
#include<string.h>


// ft_memset - fill memory with a constant byte
void *ft_memset(void *ptr, int value, size_t len)
{
    char *p = (char *)ptr;
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