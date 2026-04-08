#include <stdio.h>
#include<string.h>
#include "libft.h"

// ft_bzero - write zeroes to a byte string

void ft_bzero(void *s, size_t n)
{
    char *p = (char *)s;
    while(n--)
    {
        *p = 0;
        p++;
    }
}

// int main()
// {
//     char s[20] = "Hello world!";

//     ft_bzero(s, 4);

//     // Print memory byte by byte to see the result
//     int i = 0;
//     while (i < 12)
//     {
//         if (s[i] == 0)
//             printf("\\0 ");
//         else
//             printf("%c ", s[i]);

//         i++;
//     }
//     return 0;
// }