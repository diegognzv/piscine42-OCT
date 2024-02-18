/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieggonz <dieggonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 00:37:12 by dieggonz          #+#    #+#             */
/*   Updated: 2023/10/29 01:00:32 by dieggonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;

	if (size <= 1)
	{
		return ;
	}
	temp = tab[0];
	tab[0] = tab[size - 1];
	tab[size - 1] = temp;
	ft_rev_int_tab(tab + 1, size - 2);
}
