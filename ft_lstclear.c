/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dactuall <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:18:36 by dactuall          #+#    #+#             */
/*   Updated: 2021/10/20 15:18:38 by dactuall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	tmp = *lst;
	while (tmp)
	{
		*lst = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = *lst;
	}
}
