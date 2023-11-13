/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:28:49 by chuleung          #+#    #+#             */
/*   Updated: 2023/11/04 20:28:54 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;	

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*int	main(void)
{
	int	i;
	int	j;

	char s1[20] = "I am a hand";
	char s2[20] = "I am a hande";
	i = strncmp(s1, s2, 20);
	j = ft_strncmp(s1, s2, 20);	
	printf("%d\n", i);
	printf("%d\n", j);
	return (0);
}*/
