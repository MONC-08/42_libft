/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 01:07:21 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/17 01:07:21 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// ft_split -- splits a string into multiple strings using a delimiter

// Counts transitions from “delimiter → word”
int	word_count(const char *s, char c)
{
	int	i = 0;
	int	count = 0;

	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

// Extract one word [start, end)
char *fill_word(const char *s, int start, int end)
{
	char *word;
	int	 i;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

// 
void ft_free(char **tab, int i)
{
	while (i >= 0)
		free(tab[i--]);
	free(tab);
}

char **ft_split(const char *s, char c)
{
	char **tab;
	int	 i = 0;
	int	 start;
	int	 j = 0;
	int	 words;

	if (!s)
		return (NULL);

	words = word_count(s, c);
	tab = malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);

	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;

		while (s[i] && s[i] != c)
			i++;

		if (i > start)
		{
			tab[j] = fill_word(s, start, i);
			if (!tab[j])
				return (ft_free(tab, j), NULL);
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

// -----------------------------------------------------------------------

// int	main()
// {
// 	char **result;
// 	int	 i;

// 	result = ft_split("hello world 42", ' ');
// 	if (!result)
// 	{
// 		printf("Split failed\n");
// 		return (1);
// 	}

// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("word[%d] = %s\n", i, result[i]);
// 		i++;
// 	}

// 	// free memory
// 	i = 0;
// 	while (result[i])
// 	{
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);

// 	return (0);
// }