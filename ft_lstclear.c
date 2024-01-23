/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:46:57 by edforte           #+#    #+#             */
/*   Updated: 2024/01/23 19:00:26 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*p;

	if (!lst || !del || !(*lst))
		return ;
	p = *lst;
	while (p)
	{
		del(p->content);
		tmp = p->next;
		free(p);
		p = tmp;
	}
	*lst = NULL;
}
