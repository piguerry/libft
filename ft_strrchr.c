/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:23:15 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/06 12:06:49 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	while (count != -1)
	{
		if (str[count] == c)
			return ((char*)str + count);
		count--;
	}
	return (0);
}
