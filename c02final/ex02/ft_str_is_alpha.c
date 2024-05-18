/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 22:21:30 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/22 20:14:08 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	test;

	test = 0;
	while (str[test] != '\0')
	{
		if ((!(str[test] >= 'A' && str[test] <= 'Z')
				&& !(str[test] >= 'a' && str[test] <= 'z')))
		{
			return (0);
		}
		test++;
	}
	return (1);
}
