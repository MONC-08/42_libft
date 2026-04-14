/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:01:05 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:01:05 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

// checks for any printable character including space.

int ft_isprint(int ch)
{
    if (ch >= 32 && ch < 127)
        return 1;

    return 0; 
}

// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     printf("%d\n", ch); 
//     printf("%d\n", ft_isprint(ch)); 
// }