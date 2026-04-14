/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:02:31 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:02:31 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"
#include<string.h>


// ft_memset - fill memory with a constant byte
void *ft_memset(void *ptr, int value, size_t len)
{
    char *p = (char *)ptr;
    while(len--)
    {
        *p = value;
        p++;
    }
    return ptr;
}

// int main()
// {
//     char s[] = "Hello world!";
//     ft_memset(s, '#', 4);
//     printf("%s", s);
// }