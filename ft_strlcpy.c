/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:06:41 by edforte           #+#    #+#             */
/*   Updated: 2024/01/10 13:45:05 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i])
		i ++;
	if (dstsize < 0)
		return (i);
	while (src[j] && j < dstsize -1)
	{
		dst[j] = src[j];
		j ++;
	}
	dst[j] = '\0';
	return (i);
}
