#include <stdio.h>

// checks for a digit (0 through 9).

int ft_isdigit(int ch)
{
    if (ch >= '0' && ch <= '9')
        return 1;

    return 0; 
}

// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     printf("%d\n", ch); 
//     printf("%d\n", ft_isdigit(ch)); 
// }