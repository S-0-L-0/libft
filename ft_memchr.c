/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:57:19 by edforte           #+#    #+#             */
/*   Updated: 2024/01/10 14:10:53 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*ptr;

	i = 0;
	while (i < n)
	{
		while (ptr[i] == (unsigned char *) c)
			return (i);
		i ++;
	}
	return (0);
}
