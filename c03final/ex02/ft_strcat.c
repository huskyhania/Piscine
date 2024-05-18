/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 14:52:50 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/26 15:44:22 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
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
