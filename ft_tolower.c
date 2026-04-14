/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:04:21 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:04:21 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdio.h>
#include "libft.h"

// tolower -- upper case to lower case letter conversion
int	ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    return (c);
}

// int	main()
// {
// 	char str[] = "HELLO WORLD!";
// 	int i = 0;

// 	printf("Before: %s\n", str);

// 	while (str[i])
// 	{
// 		str[i] = ft_tolower(str[i]);
// 		i++;
// 	}

// 	printf("After : %s\n", str);
// }