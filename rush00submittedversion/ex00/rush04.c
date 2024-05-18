/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhirvon <jhirvone@student.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:30:10 by jhirvon           #+#    #+#             */
/*   Updated: 2024/02/18 17:57:26 by jhirvon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	print_row(int x, char left, char middle, char right)
{
	int	start;

	start = 1;
	while (start <= x)
	{
		if (start == 1)
		{
			ft_putchar(left);
			start++;
		}
		if (start <= x -1)
		{
			ft_putchar(middle);
			start++;
		}
		if (start == x)
		{
			ft_putchar(right);
			start++;
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	start;

	start = 1;
	if (x < 1 || y < 1)
	{
		return ;
	}
	while (start <= y)
	{
		if (start == 1)
		{
			print_row(x, 'A', 'B', 'C');
			start++;
		}
		if (start <= y -1)
		{
			print_row(x, 'B', ' ', 'B');
			start++;
		}
		if (start == y)
		{
			print_row(x, 'C', 'B', 'A');
			start++;
		}
	}
}
