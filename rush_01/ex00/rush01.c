/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:11:42 by kseligma          #+#    #+#             */
/*   Updated: 2023/10/31 20:27:56 by dieggonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		status_calc(int ind, char board[17], char *inp);
void	ft_imprimir(char *pos);
int		input_check(int ind, char board[17], char *inp);

// 'ind' es la posicion en el tablero y 'board[ind]' es el valor expresado
// en la casilla
void	rush01(char *inp)
{
	int		ind;
	char	board[17];

	ind = 0;
	while (ind < 16 && ind > -1)
	{
		if (status_calc(ind, board, inp) == 1)
			ind ++;
		else
			board[ind]++;
		while (board[ind] == '5')
		{
			board[ind] = '1';
			ind --;
			board[ind]++;
		}
	}
	if (ind == 16)
		ft_imprimir(board);
	else
		write(1, "Error\n", 6);
}

// Esta funcion verifica que no se repita un valor en la fila o columna actual
int	status_calc(int ind, char board[17], char *inp)
{
	int	ind2;

	if (board[ind] < '1' || board[ind] > '5')
		board[ind] = '1';
// Aqui se verifica mirando hacia atras en la fila (horizont)
	ind2 = 1;
	while ((ind - ind2 + 1) % 4 != 0)
	{
		if (board[ind] == board[ind - ind2])
			return (0);
		ind2 ++;
	}
// Aqui se verifica mirando hacia atras en la columna (vertical)
	ind2 = 1;
	while (ind - ind2 * 4 > -1)
	{
		if (board [ind] == board[ind - ind2 * 4])
			return (0);
		ind2 ++;
	}
	return (input_check(ind, board, inp));
}
