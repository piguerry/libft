/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:40:48 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/11 20:10:33 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_d;
	size_t	len_s;
	size_t	count;

	len_d = 0;
	len_s = 0;
	count = 0;
	while (dst[len_d] && dstsize > len_d)
		len_d++;
	while (src[len_s])
		len_s++;
	if (len_d >= dstsize)
		return (dstsize + len_s);
	while (src[count] && len_d + count + 1 < dstsize)
	{
		dst[len_d + count] = src[count];
		count++;
	}
	dst[len_d + count] = '\0';
	return (len_d + len_s);
}
