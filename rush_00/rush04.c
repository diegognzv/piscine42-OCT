/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vperez-f <vperez-f@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:29:51 by vperez-f          #+#    #+#             */
/*   Updated: 2023/10/21 21:04:09 by vperez-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	imprx(char prim, char seg, char terc, int x)
{
	int	anchura;

	anchura = x;
	while (0 < x)
	{
		if (x == anchura)
		{
			ft_putchar(prim);
			x--;
		}
		else if (1 < x)
		{
			ft_putchar(seg);
			x--;
		}
		else if (1 == x)
		{
			ft_putchar(terc);
			x--;
		}
	}
}

void	rush(int x, int y)
{
	int	altura;

	altura = y;
	while (0 < y)
	{
		if (y == altura)
		{
			imprx('A', 'B', 'C', x);
			y--;
			ft_putchar('\n');
		}
		else if (1 < y)
		{
			imprx('B', ' ', 'B', x);
			y--;
			ft_putchar('\n');
		}
		else if (y == 1)
		{
			imprx('C', 'B', 'A', x);
			y--;
			ft_putchar('\n');
		}
	}
}
