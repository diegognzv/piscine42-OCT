/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imrimir.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amas-bra <amas-bra@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:30:46 by amas-bra          #+#    #+#             */
/*   Updated: 2023/10/28 17:12:55 by amas-bra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_imprimir(char *pos)
{
	int	i;

	i = 1;
	while (i < 17)
	{
		if (i % 4 != 0)
		{
			write (1, &pos[i - 1], 1);
			write (1, " ", 1);
		}
		else
		{
			write (1, &pos[i - 1], 1);
			write (1, "\n", 1);
		}
		i++;
	}
}

/*int main()
{
	char caract[17]="1234567890123456";

	ft_imprimir(caract);

	return 0;
}*/
