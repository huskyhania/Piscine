/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:38:26 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/03/01 20:33:39 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = 0;
	if (nb < 0)
		return (0);
	while (root * root <= nb && root <= 46341)
	{
		if (root * root == nb)
			return (root);
		root++;
	}
	return (0);
}
