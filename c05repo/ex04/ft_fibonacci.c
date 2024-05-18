/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:42:39 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/03/05 17:43:08 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	fibo;

	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	else
	{
		fibo = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (fibo);
	}
}
