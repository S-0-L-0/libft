/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:07:18 by edforte           #+#    #+#             */
/*   Updated: 2024/01/24 20:55:39 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	totlen;
	size_t	i;

	dlen = 0;
	slen = 0;
	totlen = 0;
	while (dlen < size && dest[dlen] != '\0')
		dlen++;
	while (src[slen] != '\0')
		slen++;
	totlen = dlen + slen;
	if (dlen < size)
	{
		i = 0;
		while (src[i] != '\0' && dlen + i < size - 1)
		{
			dest[dlen + i] = src[i];
			i++;
		}
		dest[dlen + i] = '\0';
	}
	return (totlen);
}
