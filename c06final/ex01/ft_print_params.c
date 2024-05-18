/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:56:39 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/03/04 15:56:50 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	test;
	int	test2;

	test2 = 1;
	while (test2 < argc)
	{
		test = 0;
		while (argv[test2][test])
		{
			write(1, &argv[test2][test], 1);
			test++;
		}
		write(1, "\n", 1);
		test2++;
	}
}
