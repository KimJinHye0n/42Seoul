/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:59:35 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/15 23:40:25 by jin-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1_len;
	char	*dst;

	s1_len = ft_strlen(s1);
	dst = malloc((s1_len + 1) * sizeof(char));
	if (dst == 0)
		return (0);
	ft_strlcpy(dst, s1, s1_len + 1);
	return (dst);
}
