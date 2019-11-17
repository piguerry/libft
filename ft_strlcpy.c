/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:17:52 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/11 13:57:44 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = 0;
	if (dst == 0 || src == 0)
		return (0);
	while (src[len])
		len++;
	while (src[count] && count + 1 < size)
	{
		dst[count] = src[count];
		count++;
	}
	if (size != 0)
		dst[count] = '\0';
	return (len);
}
