/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieggonz <dieggonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:50:35 by dieggonz          #+#    #+#             */
/*   Updated: 2023/11/02 21:00:02 by dieggonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (str[count] != '\0')
	{
		if (count2 == 0 && (str[count] >= 'a' && str[count] <= 'z'))
		{
			str[count] = str[count] - 32;
			count2++;
		}
		else if (count2 > 0 && (str[count] >= 'A' && str[count] <= 'Z'))
			str[count] = str[count] + 32;
		else if (str[count] < '0' || (str[count] > '9' && str[count] < 'A')
			|| (str[count] > 'Z' && str[count] < 'a') || str[count] > 'z')
			count2 = 0;
		else
			count2++;
		count++;
	}
	return (str);
}
