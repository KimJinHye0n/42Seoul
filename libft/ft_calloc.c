/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 14:25:45 by jin-kim           #+#    #+#             */
/*   Updated: 2021/02/06 12:17:07 by kimjinhye        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;

	if (!(dst = malloc(count * size)))
		return (0);
	ft_bzero(dst, count * size);
	return (dst);
}
