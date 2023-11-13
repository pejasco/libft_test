/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:26:03 by chuleung          #+#    #+#             */
/*   Updated: 2023/11/11 19:33:24 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include <stdio.h>
//include <string.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*(p++) = (unsigned char)c;
		len--;
	}
	return (b);
}
/*int main(void)
{
    char str[20];
    strcpy(str, "Keep pushing!!!!!!");
    printf("%s\n", str);
    ft_memset(str, '$', 8);   
    printf("%s", str);
    return (0);
}*/
