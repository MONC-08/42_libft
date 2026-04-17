/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 18:58:02 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/17 18:58:02 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// ft_striteri -- apply a function to each character of a string and modifies it directly
void   ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t  i;

    if (!s || !f)
        return;

    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}

// --------------------------------------------------------------------------------------------

// void    to_upper(unsigned int i, char *c)
// {
//     (void)i;
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

// int main(void)
// {
//     char str[] = "hello world";

//     ft_striteri(str, to_upper);

//     printf("%s\n", str);

//     return (0);
// }