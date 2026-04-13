#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include<string.h>

// ft_strchr searches for the first occurrence of a character inside a string.
char *ft_strchr(const char *s, int c)
{
	const char *p = s;

	while (*p)
	{
		if (*p == (char)c)
			return ((char *)p);
		p++;
	}
	if ((char)c == '\0')
		return ((char *)p);
	return (NULL);
}

// int main()
// {
//     const char *str = "hello world";

//     char *result;

//     // Example 1: find 'o'
//     result = ft_strchr(str, 'o');
//     if (result)
//         printf("Found 'o' at: %s\n", result);
//     else
//         printf("'o' not found\n");

//     // Example 2: find 'z'
//     result = ft_strchr(str, 'z');
//     if (result)
//         printf("Found 'z' at: %s\n", result);
//     else
//         printf("'z' not found\n");

//     // Example 3: find '\0'
//     result = ft_strchr(str, '\0');
//     if (result)
//         printf("Found '\\0' at end of string\n");
// }