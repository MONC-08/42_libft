#include <stdio.h>

// checks for an alphabetic character.

int ft_isalpha(int ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        return 1;

    return 0; 
}

// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     printf("%d\n", ft_isalpha(ch)); 
// }