/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chuleung <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:00:00 by chuleung          #+#    #+#             */
/*   Updated: 2023/11/11 18:23:16 by chuleung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <unistd.h>
#include "libft.h"

void	f_toz(unsigned int index, char *ptr)
{
	if (!(index % 2))
	{
		*ptr = 'z';
		write(1, ptr, 1);
	}
	else
		write(1, ptr, 1);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	char			*new;	

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
		i++;
	new = (char *)malloc(i + 1);
	if (new == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	i = 0;
	while (new[i])
	{
		f(i, &new[i]);
		i++;
	}
}
/*int	main(void)
{
	char	*s;

	s = "abcdefg";
	ft_striteri(s, f_toz);
	return (0);
}*/
