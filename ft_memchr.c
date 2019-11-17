/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:39:06 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/07 17:38:22 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		if (*((unsigned char*)s + count) == (unsigned char)c)
			return (((unsigned char*)s + count));
		count++;
	}
	return (0);
}
