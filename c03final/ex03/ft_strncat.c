/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:42:21 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/26 17:09:06 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	test;
	unsigned int	test2;

	test = 0;
	test2 = 0;
	while (dest[test] != '\0')
	{
		test++;
	}
	while (src[test2] != '\0' && test2 < nb)
	{
		dest[test] = src[test2];
		test++;
		test2++;
	}
	dest[test] = '\0';
	return (dest);
}
