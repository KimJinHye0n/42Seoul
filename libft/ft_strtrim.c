/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 19:58:42 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/16 20:32:12 by jin-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	s1_len;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);

	s1_len = ft_strlen(s1);
	start = 0;
	while (s1[start] < s1_len && !(ft_strchr(set, s1[start])))
		start++;
	end = s1_len - 1;
	while (s1[end] && !(ft_strchr(set, s1[end])))
		end--;
	return (ft_substr(s1, start, end - start));
}
