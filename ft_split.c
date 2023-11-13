/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:12:10 by chuleung          #+#    #+#             */
/*   Updated: 2023/11/11 20:14:07 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>
//#include <stdlib.h>

static size_t	nr_of_arrays(char const *s, char d)
{
	int	i;
	int	nr;

	i = 0;
	nr = 0;
	while (s[i])
	{
		while (s[i] == d)
			i++;
		if (s[i] != d && s[i])
			nr++;
		while (s[i] != d && s[i])
			i++;
	}
	return (nr);
}

static char	*extract_str(char const *s, char c)
{
	char	*extracted_str;
	size_t	i;
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	extracted_str = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	while (s[i] != c && i < len)
	{
		extracted_str[i] = s[i];
		i++;
	}
	extracted_str[i] = '\0';
	return (extracted_str);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	size_t		number_of_arrays;
	char		**ptr_to_array;

	i = 0;
	j = 0;
	number_of_arrays = nr_of_arrays(s, c);
	ptr_to_array = (char **)malloc(sizeof(char *) * number_of_arrays + 1);
	if (!ptr_to_array)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			ptr_to_array[j] = extract_str(&s[i], c);
			j++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	ptr_to_array[j] = NULL;
	return (ptr_to_array);
}

/*#include <stdio.h>

int	main(void)
{
	char *s = "021";
	char c = '2';
	char **output;

	output = ft_split(s, c);
	for (int i = 0; output[i] != NULL; i++)
		printf("%s\n", output[i]);
	return (0);
}*/
