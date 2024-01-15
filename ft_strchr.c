/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 12:41:41 by edforte           #+#    #+#             */
/*   Updated: 2024/01/15 18:32:44 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s2;

	s2 = (char *) s;
	i = 0;
	while (s2[i])
	{
		while (s2[i] == (char) c)
			return (&(s2[i]));
		i ++;
	}
	if (c == 0)
		return (&(s2[i]));
	return (NULL);
}
