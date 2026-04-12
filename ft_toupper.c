#include <stddef.h>
#include <stdio.h>
#include "libft.h"

// toupper -- lower case to upper case letter conversion
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}


// int	main()
// {
// 	char str[] = "Hello World!";
// 	int i = 0;

// 	printf("Before: %s\n", str);

// 	while (str[i])
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}

// 	printf("After : %s\n", str);
// }