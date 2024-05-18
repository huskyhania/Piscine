/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hskrzypi <hskrzypi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:23:18 by hskrzypi          #+#    #+#             */
/*   Updated: 2024/02/27 13:29:24 by hskrzypi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	test;

	test = 0;
	if (n == 0)
	{
		return (0);
	}
	while (test < n - 1 && s1[test] == s2[test]
		&& (s1[test] != '\0' || s2[test] != '\0'))
	{
		test++;
	}
	return (s1[test] - s2[test]);
}
