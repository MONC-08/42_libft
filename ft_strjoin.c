/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 00:24:33 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/17 00:24:33 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

// ft_strjoin - joins (concatenates) two strings into a new one

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t i;
	size_t len1;
	size_t len2;
	char *str;

	if (!s1 || !s2)
		return (NULL);

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < len2)
	{
		str[len1 + i] = s2[i];
		i++;
	}
	str[len1 + len2] = '\0';
	return (str);
}


// int	main()
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*result;

// 	s1 = "Hello ";
// 	s2 = "World";

// 	result = ft_strjoin(s1, s2);
// 	if (!result)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}

// 	printf("s1: %s\n", s1);
// 	printf("s2: %s\n", s2);
// 	printf("Result: %s\n", result);

// 	free(result);
// 	return (0);
// }