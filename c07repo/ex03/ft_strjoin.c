/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:00:11 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/03/06 15:28:32 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char	*dest, char *src)
{
	int	test;
	int	test2;

	test = 0;
	test2 = 0;
	while (dest[test] != '\0')
	{
		test++;
	}
	while (src[test2] != '\0')
	{
		dest[test] = src[test2];
		test++;
		test2++;
	}
	dest[test] = '\0';
	return (dest);
}

int	my_length(int size, char **strs, int size_sep)
{
	int	count;
	int	length;

	count = 0;
	length = 0;
	while (count < size)
	{
		length = length + ft_strlen(strs[count]);
		count++;
	}
	length = length + (size - 1) * size_sep;
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*resulting_str;
	int		length2;
	int		index;

	length2 = my_length(size, strs, ft_strlen(sep));
	resulting_str = (char *)malloc(length2 + 1);
	if (resulting_str == NULL)
		return (NULL);
	if (size == 0)
		return (resulting_str);
	*resulting_str = '\0';
	index = 0;
	while (index < size)
	{
		ft_strcat(resulting_str, strs[index]);
		if (index +1 != size)
			ft_strcat(resulting_str, sep);
		index++;
	}
	return (resulting_str);
}
