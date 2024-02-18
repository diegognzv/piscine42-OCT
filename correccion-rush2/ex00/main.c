/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kseligma <kseligma@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:44:50 by kseligma          #+#    #+#             */
/*   Updated: 2023/10/28 16:44:55 by kseligma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int		valid_input(char *inp);
char	*remove_space(char *inp);
void	rush01(char *inp);

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
