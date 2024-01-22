/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:15:01 by edforte           #+#    #+#             */
/*   Updated: 2024/01/22 18:20:56 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	new = (size_t *)malloc(sizeof(size_t));
	if (!lst || !f || !del || !new)
	{
		ft_lstclear(new, del);
		return (NULL);
	}
	while (lst)
	{
		new->content = ft_lstnew(f(lst->content));
		lst = lst->next;
		new = new->next;
	}
	return (new);
}
