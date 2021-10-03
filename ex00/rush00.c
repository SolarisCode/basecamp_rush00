/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:29:39 by coder             #+#    #+#             */
/*   Updated: 2021/10/03 17:11:06 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 0;
	while (++row <= y && x > 0 && y > 0)
	{
		col = 0;
		while (++col <= x)
		{
			if (row == 1 && (col == 1 || col == x))
				ft_putchar('o');
			else if (row == y && (col == x || col == 1))
				ft_putchar('o');
			else if ((row == 1 || row == y) && (col > 1 || col < x))
				ft_putchar('-');
			else if ((row > 1 || row < y) && (col == 1 || col == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
