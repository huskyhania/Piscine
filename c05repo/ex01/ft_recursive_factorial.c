/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:03:39 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/29 15:03:12 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	test;

	test = nb;
	if (test < 0)
		return (0);
	while (test >= 0)
	{
		if (test == 0 || test == 1)
			return (1);
		else
		{
			test = test * ft_recursive_factorial(test - 1);
			return (test);
		}
	}
	return (0);
}
