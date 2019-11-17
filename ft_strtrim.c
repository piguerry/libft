/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: piguerry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 13:56:39 by piguerry          #+#    #+#             */
/*   Updated: 2019/11/11 14:32:00 by piguerry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			checkchar(char c, char const *set)
{
	int count;

	count = 0;
	while (set[count])
	{
		if (c == set[count])
			return (1);
		count++;
	}
	return (0);
}

static char			*newstr(char const *s1, int start, int end)
{
	int		cursor;
	char	*str;

	cursor = 0;
	if (!(str = (char*)malloc(sizeof(char) * (end - start + 1))))
		return (0);
	while (start < end)
	{
		str[cursor] = s1[start];
		cursor++;
		start++;
	}
	str[cursor] = '\0';
	return (str);
}

static char			*nostr(void)
{
	char *str;

	if (!(str = (char*)malloc(sizeof(char))))
		return (0);
	str[0] = '\0';
	return (str);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	count;
	int	count2;

	len = 0;
	count = 0;
	if (s1 == 0 || set == 0)
		return (0);
	while (s1[len])
		len++;
	count2 = len - 1;
	while (s1[count] && checkchar(s1[count], set))
		count++;
	while (count2 >= 0 && checkchar(s1[count2], set))
		count2--;
	count2++;
	if (count2 < count)
		return (nostr());
	else
		return (newstr(s1, count, count2));
}
