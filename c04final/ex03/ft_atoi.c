/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:36:37 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/28 13:51:26 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	test;
	int	negation;
	int	number;

	test = 0;
	negation = 1;
	number = 0;
	while ((str[test] >= 9 && str[test] <= 13) || str[test] == 32)
		test++;
	while (str[test] == 43 || str[test] == 45)
	{
		if (str[test] == 45)
			negation *= -1;
		test++;
	}
	while (str[test] >= '0' && str[test] <= '9')
	{
		number = (number * 10) + (str[test] - '0');
		test++;
	}
	return (number * negation);
}
