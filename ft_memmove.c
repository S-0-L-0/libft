/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:59:33 by edforte           #+#    #+#             */
/*   Updated: 2024/01/24 20:54:54 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
		ft_memcpy(dst, src, n);
	else
	{
		d = (d + n) - 1;
		s = (s + n) - 1;
		while (n > 0)
		{
			*d = *s;
			d --;
			s --;
			n --;
		}
	}
	return (dst);
}
