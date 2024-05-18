/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:54:25 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/29 19:05:20 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	exponent;
	int	result;

	exponent = power;
	count = 1;
	result = 1;
	if (exponent < 0)
		return (0);
	if (exponent == 0)
		return (1);
	if (exponent == 1)
		return (nb);
	while (count <= exponent)
	{
		result *= nb;
		count++;
	}
	return (result);
}
