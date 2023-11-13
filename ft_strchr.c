/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:26:27 by chuleung          #+#    #+#             */
/*   Updated: 2023/11/11 20:19:18 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		++s;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

/*int 	main(void)
{
	char tweet[] = "This is my @mention";
	
	//char *mention = strchr(tweet, 'z');
	char *mention = ft_strchr(tweet, 'm');
	printf("%p\n", mention);
	printf("%s\n", mention);
	return (0);
}*/
