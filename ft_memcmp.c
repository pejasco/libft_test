/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:22:24 by chuleung          #+#    #+#             */
/*   Updated: 2023/11/11 20:16:01 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (i < n && (ptr1[i] || ptr2[i]))
	{
		if (ptr1[i] == ptr2[i])
			i++;
		else
			return (ptr1[i] - ptr2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	int	res1;
	int res2;

	char s1[20] = "Iamahandsomeman";
	char s2[20] = "Iamahandsomeman";
	res1 = memcmp(s1, s2, 4);
	res2 = ft_memcmp(s1, s2, 4);	
	printf("%d\n", res1);
	printf("%d\n", res2);
	return (0);
}
*/
