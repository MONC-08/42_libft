#include <stdio.h>
#include <string.h>
#include "libft.h"

// calculate the length of a string


size_t ft_strlen(const char *str)
{
    size_t len = 0;
    while(str[len] != '\0')
        len++;

    return len;
}

// int main()
// {
//     char str[] = "Hello World!";
//     printf("%d", ft_strlen(str));
// }