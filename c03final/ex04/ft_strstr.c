/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:10:51 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/26 19:21:46 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	test;
	int	test2;

	test = 0;
	test2 = 0;
	if (to_find[test] == '\0')
	{
		return (str);
	}
	while (str[test] != '\0')
	{
		while (to_find[test2] != '\0' && str[test + test2] == to_find[test2])
		{
			test2++;
		}
		if (to_find[test2] == '\0')
			return (str + test);
		test2 = 0;
		test++;
	}
	return (0);
}
