/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 01:14:39 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/15 01:14:39 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// ft_substr extracts a portion (substring) of a string
char *ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*ret;

	if (!s)
		return (NULL);

	s_len = ft_strlen(s);

	if (start >= s_len)
		len = 0;
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);

	ret = malloc(len + 1);
	if (!ret)
		return (NULL);

	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}

// #include <stdio.h>
// int	main()
// {
// 	char *s = "hello world";
// 	char *sub;

// 	// Test 1: normal case
// 	sub = ft_substr(s, 6, 5);
// 	printf("Test 1: %s\n", sub);
// 	free(sub);

// 	// Test 2: start in middle
// 	sub = ft_substr(s, 0, 5);
// 	printf("Test 2: %s\n", sub);
// 	free(sub);

// 	// Test 3: len too big
// 	sub = ft_substr(s, 6, 20);
// 	printf("Test 3: %s\n", sub);
// 	free(sub);

// 	// Test 4: start at end (edge case)
// 	sub = ft_substr(s, 11, 5);
// 	printf("Test 4: '%s'\n", sub);
// 	free(sub);

// 	// Test 5: start beyond end
// 	sub = ft_substr(s, 50, 5);
// 	printf("Test 5: '%s'\n", sub);
// 	free(sub);
// }