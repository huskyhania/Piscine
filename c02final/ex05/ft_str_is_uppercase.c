/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:13:58 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/22 20:18:37 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	test;

	test = 0;
	while (str[test] != '\0')
	{
		if (!(str[test] >= 'A' && str[test] <= 'Z'))
		{
			return (0);
		}
		test++;
	}
	return (1);
}
