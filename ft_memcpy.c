/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:45:48 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/06 17:32:32 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;

	count = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (count < n)
	{
		*((char*)dst + count) = *((char*)src + count);
		count++;
	}
	return (dst);
}
