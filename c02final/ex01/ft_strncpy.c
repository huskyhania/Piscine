/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:02:34 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/22 20:38:43 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	test;

	test = 0;
	while (src[test] != '\0' && test < n)
	{
		dest[test] = src[test];
		test++;
	}
	while (test < n)
	{
		dest[test] = '\0';
		test++;
	}
	return (dest);
}
