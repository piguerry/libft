/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:28:36 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/11 19:14:22 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*nostr(void)
{
	char *str;

	if (!(str = (char*)malloc(sizeof(char))))
		return (0);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	count;
	char			*str;
	unsigned int	slen;

	slen = 0;
	count = 0;
	if (s == 0)
		return (0);
	while (s[slen])
		slen++;
	if (slen < start || len == 0)
		return (nostr());
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (count < len && s[count + start])
	{
		str[count] = s[count + start];
		count++;
	}
	str[count] = '\0';
	return (str);
}
