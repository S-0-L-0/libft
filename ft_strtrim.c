/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 22:12:19 by edforte           #+#    #+#             */
/*   Updated: 2024/01/24 20:56:26 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*s2;

	if (!s1)
		return (0);
	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, (int)s1[i]) && s1[i])
	{
		start ++;
		i ++;
	}
	i = end;
	while (ft_strchr(set, (int)s1[i]) && i > start)
	{
		i --;
	}
	s2 = ft_substr(s1, start, (i - start) + 1);
	if (!s2)
		return (NULL);
	return (s2);
}
