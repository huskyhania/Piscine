/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:24:50 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/23 18:26:04 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	test;

	test = 0;
	while (str[test] != '\0')
	{
		if (!(str[test] >= 32) || str[test] > 126)
		{
			return (0);
		}
		test++;
	}
	return (1);
}
