/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:45:31 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/22 20:36:07 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	test;

	test = 0;
	while (str[test] != '\0')
	{
		if (str[test] >= 'a' && str[test] <= 'z')
		{
			str[test] = str[test] - 32;
		}
		test++;
	}
	return (str);
}
