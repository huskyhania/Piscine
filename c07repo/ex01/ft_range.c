/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:48:51 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/03/05 14:39:36 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array_ptr;
	int	test;

	test = 0;
	if (min >= max)
		return (NULL);
	array_ptr = malloc((max - min) * sizeof(int));
	if (array_ptr == NULL)
		return (NULL);
	while (test < (max - min))
	{
		array_ptr[test] = min + test;
		test++;
	}
	return (array_ptr);
}
