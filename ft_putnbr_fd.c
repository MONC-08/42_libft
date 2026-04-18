/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchowdhu <mchowdhu@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/18 23:53:40 by mchowdhu          #+#    #+#             */
/*   Updated: 2026/04/18 23:53:40 by mchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

// ft_putnbr_fd -- write an int on a specified file descriptor

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nb > 9)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putchar_fd((nb % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((nb + '0'), fd);
}


// -----------------------------------------------------------------

int	main()
{
	ft_putnbr_fd(0, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-42, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);

	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);

	return (0);
}