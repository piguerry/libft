/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:22:27 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/07 16:04:18 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		*((unsigned char*)dst + count) = *((unsigned char*)src + count);
		if (*((unsigned char*)src + count) == (unsigned char)c)
			return (dst + count + 1);
		count++;
	}
	return (0);
}
