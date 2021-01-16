/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 22:08:32 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/15 23:50:39 by jin-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*dst;
	unsigned int i;
	size_t		s_len;

	s_len = ft_strlen(s);
	if (!(dst = malloc((len + 1) * sizeof(char))))
		return (0);
	if (!(s))
		return (0);
	if (start >= s_len)
		return (ft_strdup(""));
	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
