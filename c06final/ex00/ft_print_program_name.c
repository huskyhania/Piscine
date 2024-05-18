/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:49:47 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/03/03 20:59:35 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	test;

	test = 0;
	if (argc == 1)
	{
		while (argv[0][test] != '\0')
		{
			write(1, &argv[0][test], 1);
			test++;
		}
		write(1, "\n", 1);
	}
}
