/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieggonz <dieggonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 01:08:55 by dieggonz          #+#    #+#             */
/*   Updated: 2023/10/29 19:58:29 by dieggonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	contador_a;
	int	contador_b;
	int	var_temp;

	contador_a = 0;
	contador_b = 0;
	var_temp = tab[contador_b];
	while (contador_a < size - 1)
	{
		contador_b = 0;
		while (contador_b < size - contador_a - 1)
		{
			if (tab[contador_b] > tab[contador_b + 1])
			{
				var_temp = tab[contador_b];
				tab[contador_b] = tab[contador_b + 1];
				tab[contador_b + 1] = var_temp;
			}
			contador_b++;
		}
		contador_a++;
	}
}
