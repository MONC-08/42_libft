#include <stdio.h>

// checks if a value is a valid ASCII character

int ft_isascii(int ch)
{
    if (ch >= 0 && ch <= 127)
        return 1;

    return 0; 
}

// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     printf("%d\n", ch); 
//     printf("%d\n", ft_isascii(ch)); 
// }