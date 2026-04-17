/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 01:25:52 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/17 01:25:52 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// ft_itoa - Converts an integer into a string

static int	ft_len(long n)
{
	int	len = 0;

	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	char *str;
	long nb;
	int	 len;

	nb = n;
	len = ft_len(nb);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';

	if (nb == 0)
		str[0] = '0';

	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}

	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

// -------------------------------------------------------------------

// int	main()
// {
// 	char	*result;

// 	result = ft_itoa(42);
// 	printf("42 -> %s\n", result);
// 	free(result);

// 	result = ft_itoa(-42);
// 	printf("-42 -> %s\n", result);
// 	free(result);

// 	result = ft_itoa(0);
// 	printf("0 -> %s\n", result);
// 	free(result);

// 	result = ft_itoa(123456);
// 	printf("123456 -> %s\n", result);
// 	free(result);

// 	result = ft_itoa(-2147483648);
// 	printf("INT_MIN -> %s\n", result);
// 	free(result);

// 	return (0);
// }