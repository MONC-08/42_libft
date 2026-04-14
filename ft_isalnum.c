/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:00:02 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:00:02 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

int ft_isalnum(int ch)
{
    if(ft_isalpha(ch) || ft_isdigit(ch))
        return 1;
    
    return 0;
}

// int main()
// {
//     char ch;
//     scanf("%c", &ch);
//     printf("%d", ft_isalnum(ch));
//     return 0;
// }