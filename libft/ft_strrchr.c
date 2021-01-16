/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 17:00:23 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/16 16:58:19 by kimjinhye        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;

	slen = ft_strlen(s);
	if (c == 0)
		return ((char *)s + slen);
	while (slen--)
	{
		if (*(s + slen) == c)
			return ((char *)s + slen));
	}
	return (0);
}
