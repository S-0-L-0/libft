/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:57:19 by edforte           #+#    #+#             */
/*   Updated: 2024/01/15 19:16:47 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*ptr;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		while (ptr[i] == (unsigned char) c)
			return ((void *)&ptr[i]);
		i ++;
	}
	return (0);
}
