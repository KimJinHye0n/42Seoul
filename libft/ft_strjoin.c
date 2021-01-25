/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 17:01:15 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/16 17:12:47 by jin-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	joins;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	joins = malloc(((s1_len + 1) + (s2_len + 1)) * sizeof(char));
	if (!joins)
		return (0);
	ft_memcpy(joins, s1, s1_len);
	ft_memcpy(joins + s1_len, s2, s2_len);
	joins[s1_len + s2_len] = '\0';
	return (joins);
}
