/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 21:25:50 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/22 20:12:13 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
