/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieggonz <dieggonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 02:20:41 by dieggonz          #+#    #+#             */
/*   Updated: 2023/11/08 17:33:26 by dieggonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	count2;
	unsigned int	res;

	count = 0;
	count2 = 0;
	res = 0;
	while (dest[count] != '\0')
		count++;
	while (src[res] != '\0')
		res++;
	if (size <= count)
		res += size;
	else
		res += count;
	while (src[count2] != '\0' && (count + 1) < size)
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (res);
}
