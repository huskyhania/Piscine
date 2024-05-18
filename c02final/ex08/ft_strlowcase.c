/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 20:34:15 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/22 20:35:09 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	test;

	test = 0;
	while (str[test] != '\0')
	{
		if (str[test] >= 'A' && str[test] <= 'Z')
		{
			str[test] = str[test] + 32;
		}
		test++;
	}
	return (str);
}
