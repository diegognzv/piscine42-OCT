/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieggonz <dieggonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 01:58:42 by dieggonz          #+#    #+#             */
/*   Updated: 2023/11/08 17:28:26 by dieggonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	int				count2;

	count = 0;
	count2 = 0;
	while (dest[count2] != '\0')
		count2++;
	while (src[count] != '\0' && count < nb)
	{
		dest[count2] = src[count];
		count++;
		count2++;
	}
	dest[count2] = '\0';
	return (dest);
}
