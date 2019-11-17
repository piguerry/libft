/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:10:24 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/11 15:15:45 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*destc;
	const unsigned char	*srcc;

	i = 0;
	if (!dst && !src)
		return (NULL);
	destc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (srcc < destc)
		while (++i <= len)
			destc[len - i] = srcc[len - i];
	else
		while (len-- > 0)
			*(destc++) = *(srcc++);
	return (dst);
}
