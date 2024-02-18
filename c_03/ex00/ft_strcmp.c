/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dieggonz <dieggonz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:40:15 by dieggonz          #+#    #+#             */
/*   Updated: 2023/11/04 01:18:54 by dieggonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] && s2[count])
	{
		if (s1[count] != s2[count])
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		count++;
	}
	if ((s1[count] == '\0' && s2[count] != '\0')
		|| (s1[count] != '\0' && s2[count] == '\0'))
		return ((unsigned char)s1[count] - (unsigned char)s2[count]);
	return (0);
}
