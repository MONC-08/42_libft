/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 00:58:36 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 00:58:36 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include<string.h>

// atoi - convert ASCII string to integer
int ft_atoi(const char *str)
{
	int i;
	int sign;
	long long result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (int)(result * sign);
}

// int main()
// {
// 	printf("Test 1: %d\n", ft_atoi("42"));
// 	printf("Test 2: %d\n", ft_atoi("   -42"));
// 	printf("Test 3: %d\n", ft_atoi("+123"));
// 	printf("Test 4: %d\n", ft_atoi("123abc"));
// 	printf("Test 5: %d\n", ft_atoi("abc123"));
// 	printf("Test 6: %d\n", ft_atoi("   +0"));
// 	printf("Test 7: %d\n", ft_atoi("-2147483648"));
// 	printf("Test 8: %d\n", ft_atoi("2147483647"));
// }