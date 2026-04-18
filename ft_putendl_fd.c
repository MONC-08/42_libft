/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 23:40:29 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/18 23:40:29 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// It prints a string + newline (\n) to a given file descriptor
#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// ----------------------------------------------------------------------
// int	main()
// {
// 	ft_putendl_fd("Hello", 1);
// 	ft_putendl_fd("World", 1);
// 	ft_putendl_fd("This is an error message", 2);
// 	return (0);
// }