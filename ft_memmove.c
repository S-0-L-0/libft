/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:59:33 by edforte           #+#    #+#             */
/*   Updated: 2024/01/15 19:24:01 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = dst;
	s = src;
	if (d < s)
		ft_memcpy(dst, src, n);
	else
	{
		d += n;
		s += n;
		while (n-- > 0)
		{
			*d = *s;
			d --;
			s --;
		}
	}
	return (d);
}
