/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:15:01 by edforte           #+#    #+#             */
/*   Updated: 2024/01/23 19:57:58 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*p;
	t_list	*cpy;

	if (!lst || !f || !del)
		return (NULL);
	new = (ft_lstnew(f(lst->content)));
	cpy = new;
	if (!new)
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	p = lst;
	lst = lst->next;
	while (lst)
	{
		new->next = ft_lstnew(f(lst->content));
		if (!new->content)
			return (ft_lstclear(&p, del), NULL);
		lst = lst->next;
		new = new->next;
	}
	return (cpy);
}
