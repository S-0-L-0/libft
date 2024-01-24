/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:41:01 by edforte           #+#    #+#             */
/*   Updated: 2024/01/24 20:56:04 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*haystack_tmp;
	char	*needle_tmp;

	i = 0;
	haystack_tmp = (char *) haystack;
	needle_tmp = (char *) needle;
	if (haystack == NULL && len != 0)
		*haystack_tmp = 69;
	if (*needle_tmp == '\0')
		return (haystack_tmp);
	while ((ft_strlen(needle_tmp) + i) <= len && haystack_tmp[i])
	{
		if (haystack_tmp[i] == needle_tmp[0])
		{
			if (ft_strncmp(&haystack_tmp[i], needle_tmp,
					ft_strlen(needle_tmp)) == 0)
				return (&(haystack_tmp[i]));
		}
		i ++;
	}
	return (0);
}
