/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:03:15 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:03:15 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include<string.h>

// strlcat appends src to the end of dst
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t i;

    if(dstsize <= dst_len)
        return dstsize + src_len;

    i = 0;
    while(src[i] != '\0' && (dst_len + i) < (dstsize - 1))
    {
        dst[dst_len + i] = src[i];
        i++;
    }

    dst[dst_len + i] = '\0';
    return dst_len + src_len;
}

// include your ft_strlcat here

// int	main(void)
// {
// 	char	dst[10] = "Hi";
// 	char	src[] = " there!";
// 	size_t	res;

// 	printf("Before:\n");
// 	printf("dst = %s\n", dst);
// 	printf("src = %s\n\n", src);

// 	res = ft_strlcat(dst, src, sizeof(dst));

// 	printf("After:\n");
// 	printf("dst = %s\n", dst);
// 	printf("Returned value = %d\n", res);
// 	printf("Buffer size = %d\n", sizeof(dst));

// }