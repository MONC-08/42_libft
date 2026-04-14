/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:03:23 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:03:23 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include<string.h>

// Copies a string from src to dest, ensuring that the destination buffer is not overflowed.

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t src_len = ft_strlen(src);

    if(dstsize == 0)
        return src_len;

    i = 0;
    while(i < (dstsize - 1) && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return src_len;
}

// int main()
// {
//     char src[] = "Hello World!";
//     char dst[10];

//     size_t res = ft_strlcpy(dst, src, sizeof(dst));
//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dst);
//     printf("length of source: %d", res);
// }