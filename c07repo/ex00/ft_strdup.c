/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:22:22 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/03/04 20:11:08 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//strlen, string copy, malloc

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strcpy(char	*dest, char *src)
{
	int	test;

	test = 0;
	while (src[test] != '\0')
	{
		dest[test] = src[test];
		test++;
	}
	dest[test] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		length;

	length = ft_strlen(src);
	ptr = (char *) malloc((length + 1) * sizeof(char));
	ft_strcpy(ptr, src);
	return (ptr);
}
