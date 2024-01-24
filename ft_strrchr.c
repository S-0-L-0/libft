/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:47:45 by edforte           #+#    #+#             */
/*   Updated: 2024/01/24 20:56:13 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s2;

	s2 = (char *) s;
	i = 0;
	while (s2[i])
		i ++;
	if (c == 0)
		return (&s2[i]);
	while (i >= 0)
	{
		while (s2[i] == (char) c)
			return (&s2[i]);
		i --;
	}
	return (NULL);
}
