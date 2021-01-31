/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jin-kim <jin-kim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 11:54:27 by jin-kim           #+#    #+#             */
/*   Updated: 2021/01/31 16:07:29 by jin-kim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*coming;

	if (lst == NULL)
		return ;
	curr = *lst;
	while (curr)
	{
		coming = curr->next;
		ft_lstdelone(curr, del);
		curr = coming;
	}
	*lst = NULL;
}
