/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 11:19:56 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/31 13:53:09 by jin-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL && lst == NULL)
		return ;
	tmp = *lst;
	if (tmp == NULL)
		*lst = new;
	else
	{
		while (tmp -> next)
			tmp = tmp -> next;
		tmp -> next = new;
	}
}
