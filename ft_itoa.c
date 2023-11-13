/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:57:19 by chuleung          #+#    #+#             */
/*   Updated: 2023/11/11 19:27:21 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>
//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>

int	ft_lencheck(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		len = 1;
	}	
	while (nbr > 0)
	{	
		nbr /= 10;
		len++;
	}		
	return (len);
}

char	*ft_itoa(int n)
{
	long	nblong;
	char	*str;
	int		i;
	size_t	len;

	nblong = n;
	len = ft_lencheck(nblong);
	str = (char *)malloc(len + 1);
	i = len - 1;
	if (nblong < 0)
	{
		str[0] = '-';
		nblong = -nblong;
	}
	while (nblong > 0)
	{
		str[i--] = (nblong % 10) + '0';
		nblong /= 10;
	}
	str[len] = '\0';
	return (str);
}

/*int	main(void)
{
	long	nbr;
	char *test;

	nbr = 2147483647;
	test = ft_itoa(nbr);
	printf("%s\n", test);
	//write(1, &test[1], 1);
	return (0);
}*/
