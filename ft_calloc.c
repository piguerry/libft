/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:15:43 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/11 14:34:15 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*tab;
	size_t		count2;

	count2 = 0;
	if (size == 0 || count == 0)
	{
		if (!(tab = malloc(1)))
			return (0);
		*(char*)tab = 0;
	}
	else
	{
		if (!(tab = malloc(size * count)))
			return (0);
		while (count2 < count * size)
		{
			*((char*)tab + count2) = 0;
			count2++;
		}
	}
	return (tab);
}
