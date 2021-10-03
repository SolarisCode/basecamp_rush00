/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 14:39:19 by coder             #+#    #+#             */
/*   Updated: 2021/10/03 17:12:04 by coder            ###   ########.fr       */
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
			if ((row == 1 && col == 1) || (col == 1 && row == y))
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == x))
				ft_putchar('C');
			else if ((row == 1 || row == y) && (col > 1 || col < x))
				ft_putchar('B');
			else if ((row > 1 || row < y) && (col == 1 || col == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
