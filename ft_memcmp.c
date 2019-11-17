/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:48:40 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/11 15:15:17 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		if (*((unsigned char*)s1 + count) !=
			*((unsigned char*)s2 + count))
			return (*((unsigned char*)s1 + count) -
				*((unsigned char*)s2 + count));
			count++;
	}
	return (0);
}
