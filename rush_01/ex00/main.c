/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:44:50 by kseligma          #+#    #+#             */
/*   Updated: 2023/10/31 20:37:14 by dieggonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int		valid_input(char *inp);
char	*remove_space(char *inp);
void	rush01(char *inp);

// Esta parte del codigo recibe el input y lo filtra, elimina los espacios
// comparando su valor que debe ser impar y realizando resto %
// Si todo esta en orden en funcion valid_input (es decir, retorna '1' a
// valid_input(argv[1]) quiere decir que el input es correcto y puede proseguir

int	main(int argc, char *argv[])
{
	char	*input;

	if (argc != 2 || valid_input(argv[1]) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	input = remove_space(argv[1]);
	rush01(input);
	return (0);
}

// Esta funcion recorre el array desde 0, verifica que sea impar, lo divide entre
// 2 para asignarle su posicion en el array definitivo con el trabajara
// e incrementa. --> Linea justo antes de return (inp) no sirve.
// '0' al final del 'while' hace referencia a 'null', equivale a '\0'
char	*remove_space(char *inp)
{
	int	ind;

	ind = 0;
	while (inp[ind] != 0)
	{
		if (ind % 2 == 0)
			inp[ind / 2] = inp[ind];
		ind ++;
	}
	inp[ind] = 0;
	return (inp);
}

// Hace una comprobacion similar a la anterior pero con los caracteres del array
// en lugar de los espacios.
// '0' al final del 'while' hace ref al 'null'
int	valid_input(char *inp)
{
	int	ind;

	ind = 0;
	while (inp[ind] != 0)
	{
		if (ind % 2 == 0)
		{
			if (inp[ind] < '1' || inp[ind] > '4')
				return (0);
		}
		else
		{
			if (inp[ind] != ' ')
				return (0);
		}
		ind ++;
	}
	if (ind != 31)
		return (0);
	return (1);
}
