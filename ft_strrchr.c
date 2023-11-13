/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:29:23 by chuleung          #+#    #+#             */
/*   Updated: 2023/11/11 17:48:54 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char*s, int c)
{
	char	*ret;

	ret = 0;
	while (*s)
	{
		if (*s == c)
		{
			ret = (char *)s;
		}
		++s;
	}
	if (ret)
		return (ret);
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}
/*
char	*ft_strrchr(const char *s, int c)
{
	int	position;

	position = 0;
	while (s[position])
	{
		position++;
	}
	while (position )
	{
		if(*(s + position) == c)
		{
			return ((char *)(s + position));
		}
		position--;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}*/

/*int 	main(void)
{
	char tweet[] = "This is my @tention";
	
	//char *mention = strrchr(tweet, 'T');
	char *mention = ft_strrchr(tweet, 't');
	printf("%s\n", mention);
	return (0);
}*/
