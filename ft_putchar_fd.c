/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 21:56:14 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/18 21:56:14 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_putchar_fd writes the given character to the given file descriptor.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// ----------------------------------------------------------
// #include <stdio.h>

// int	main()
// {
// 	ft_putchar_fd('H', 1);
// 	ft_putchar_fd('i', 1);
// 	ft_putchar_fd('\n', 1);

// 	ft_putchar_fd('E', 2);
// 	ft_putchar_fd('r', 2);
// 	ft_putchar_fd('r', 2);
// 	ft_putchar_fd('\n', 2);

// 	return (0);
// }