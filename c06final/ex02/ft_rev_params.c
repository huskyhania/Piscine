/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 21:01:13 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/03/03 21:12:40 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	test2;
	int	test;

	test2 = argc - 1;
	while (test2 > 0)
	{
		test = 0;
		while (argv[test2][test])
		{
			write(1, &argv[test2][test], 1);
			test++;
		}
		write(1, "\n", 1);
		test2--;
	}
	return (0);
}
