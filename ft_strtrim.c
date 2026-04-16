/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 00:41:33 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/17 00:41:33 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// ft_strtrim -- trims character set from string

static int	ft_charInSet(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	size_t i;
	size_t start;
	size_t end;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	while (s1[start] && ft_charInSet(s1[start], set))
		start++;

	end = ft_strlen(s1);
	while (end > start && ft_charInSet(s1[end - 1], set))
		end--;

	str = malloc(end - start + 1);
	if (!str)
		return (NULL);

	i = 0;
	while (start < end)
		str[i++] = s1[start++];

	str[i] = '\0';
	return (str);
}

// -----------------------------------------------------------------------
// int	main()
// {
// 	char *s1;
// 	char *set;
// 	char *result;

// 	s1 = "   Hello World   ";
// 	set = " ";

// 	result = ft_strtrim(s1, set);
// 	if (!result)
// 	{
// 		printf("Allocation failed\n");
// 		return (1);
// 	}

// 	printf("Original: '%s'\n", s1);
// 	printf("Set: '%s'\n", set);
// 	printf("Trimmed: '%s'\n", result);

// 	free(result);
// 	return (0);
// }