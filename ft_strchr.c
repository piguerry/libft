/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:16:56 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/06 12:04:25 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] == c)
			return ((char*)str + count);
		count++;
	}
	if (str[count] == c)
		return ((char*)str + count);
	return (0);
}
