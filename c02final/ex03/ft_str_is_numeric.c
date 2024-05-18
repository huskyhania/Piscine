/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:28:27 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/22 20:15:25 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	test;

	test = 0;
	while (str[test] != '\0')
	{
		if (!(str[test] >= '0' && str[test] <= '9'))
		{
			return (0);
		}
		test++;
	}
	return (1);
}
