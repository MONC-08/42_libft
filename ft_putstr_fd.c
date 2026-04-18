/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 23:18:14 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/18 23:18:14 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putstr_fd - Instead of printing one character, it prints a whole string to a file descriptor

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	*ptr;

	if (!s)
		return;
	ptr = s;
	while (*ptr)
	{
		ft_putchar_fd(*ptr, fd);
		ptr++;
	}
}

// --------------------------------------------------


int	main()
{
	ft_putstr_fd("Hello, world!\n", 1);

	ft_putstr_fd("This is an error message\n", 2);

	return (0);
}