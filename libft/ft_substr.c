/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 22:08:32 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/30 22:08:06 by kimjinhye        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*dst;
	unsigned int i;
	size_t		s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (!(dst = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	if (start >= s_len)
	{
		dst[0] = 0;
		return (dst);
	}
	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
