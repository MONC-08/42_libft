#include <stdio.h>
#include "libft.h"

int ft_isalnum(int ch)
{
    if(ft_isalpha(ch) || ft_isdigit(ch))
        return 1;
    
    return 0;
}

// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     printf("%d", ft_isalnum(ch));
//     return 0;
// }