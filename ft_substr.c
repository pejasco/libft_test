/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:48:54 by chuleung          #+#    #+#             */
/*   Updated: 2023/11/11 20:07:12 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	old_len;
	size_t	new_position;

	new = (char *)malloc(len);
	if (!(new))
		return (NULL);
	old_len = 0;
	while (s[old_len])
	{
		old_len++;
	}
	if (start >= old_len)
		return (NULL);
	new_position = 0;
	while (s[start] && new_position < (len - 1) && start <= old_len)
	{
		new[new_position] = s[start];
		start++;
		new_position++;
	}
	new[len - 1] = '\0';
	return (new);
}
/*int	main(void)
{
	int	start;
	size_t	len;

	start = 6;
	len = 5000000000;
	char const old[] = "abcdefghijk!";
	char *test = ft_substr(old, start, len);
	printf("%s\n", test);
	return (0);
}*/
/*
len6

012345
123456
*/
