/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieggonz <dieggonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:03:58 by dieggonz          #+#    #+#             */
/*   Updated: 2023/11/08 17:30:16 by dieggonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		count;
	char	*temp;

	temp = str;
	if (*to_find == '\0')
		return (str);
	while (*temp)
	{
		count = 0;
		if (*temp == to_find[0])
		{
			while (temp[count] == to_find[count] && to_find[count])
				count++;
			if (to_find[count] == '\0')
				return (temp);
		}
		temp++;
	}
	return (0);
}
