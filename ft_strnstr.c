/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:04:35 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/08 17:38:12 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t count;
	size_t count2;
	size_t lenght;

	count = 0;
	lenght = 0;
	while (needle[lenght])
		lenght++;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (count < len && haystack[count])
	{
		count2 = 0;
		while (haystack[count + count2] == needle[count2] &&
				needle[count2] && count + count2 < len)
			count2++;
		if (count2 == lenght)
			return ((char*)haystack + count);
		count++;
	}
	return (0);
}
