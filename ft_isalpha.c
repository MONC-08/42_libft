/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:00:17 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:00:17 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

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