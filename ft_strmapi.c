/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:40:37 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/17 18:40:37 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// ft_strmapi - creates a new string by applying a function to each character of another string, using its index
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *res;

    if (!s || !f)
        return (NULL);

    res = malloc((ft_strlen(s) + 1) * sizeof(char));
    if (!res)
        return (NULL);

    i = 0;
    while (s[i] != '\0')
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';

    return (res);
}

// -------------------------------------------------------------------------------------------------

// char    my_func(unsigned int i, char c)
// {
//     return (c + i);
// }

// int main()
// {
//     char    *result;

//     result = ft_strmapi("abc", my_func);
//     if (!result)
//     {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     printf("Result: %s\n", result);

//     free(result);
//     return (0);
// }