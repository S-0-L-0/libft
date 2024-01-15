/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:07:18 by edforte           #+#    #+#             */
/*   Updated: 2024/01/15 19:20:46 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i ++;
	while (src[j] && (dstsize--) > 0)
	{
		dst[i] = src[j];
		j ++;
		i ++;
	}
	dst[i] = '\0';
	return ((i + j) - 1);
}
