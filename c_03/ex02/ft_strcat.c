/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieggonz <dieggonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:52:16 by dieggonz          #+#    #+#             */
/*   Updated: 2023/11/07 23:05:01 by dieggonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (dest[count2] != '\0')
		count2++;
	while (src[count] != '\0')
	{
		dest[count2] = src[count];
		count++;
		count2++;
	}
	dest[count2] = '\0';
	return (dest);
}
