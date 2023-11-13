/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:02:45 by chuleung          #+#    #+#             */
/*   Updated: 2023/11/11 20:06:08 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <unistd.h>
//#include <limits.h>

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;

	ln = n;
	if (ln < 0)
	{
		ln = -ln;
		write(1, "-", 1);
	}
	if (ln > 9)
		ft_putnbr_fd(ln / 10, fd);
	ft_putchar(fd, ((ln % 10) + 48));
}

/*int	main(void)
{
	int test;
	int	fd;

	
	fd = 1;
	//test = INT_MIN;
	test = INT_MAX;

	ft_putnbr_fd(test, fd);
	return (0);
}*/
