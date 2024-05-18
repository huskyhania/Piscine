/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:41:11 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/22 20:16:36 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	test;

	test = 0;
	while (str[test] != '\0')
	{
		if (!(str[test] >= 'a' && str[test] <= 'z'))
		{
			return (0);
		}
		test++;
	}
	return (1);
}
