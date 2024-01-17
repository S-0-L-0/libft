/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:07:18 by edforte           #+#    #+#             */
/*   Updated: 2024/01/17 16:21:51 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i ++;
	while (src[j] && (dstsize) > j + 1)
	{
		dst[i] = src[j];
		j ++;
		i ++;
	}
	dst[i] = '\0';
	return (i);
}

#include <string.h>
int main()
{
	char *dest1;
	char *dest2;
	
	if (!(dest1 = (char *)malloc(sizeof(*dest1) * 15)))
		return (0);    
	if (!(dest2 = (char *)malloc(sizeof(*dest2) * 15)))
		return (0);
	memset(dest2, 0, 15);
	memset(dest2, 'r', 6);
  	dest2[14] = 'a';
	memset(dest1, 0, 15);
	memset(dest1, 'r', 6);
  	dest1[14] = 'a';

	// Ft_strlcat
    size_t result1 = ft_strlcat(dest1, "lorem ipsum dolor sit amet", 15);
    printf("Concatenated string: %s\n", dest1);
    printf("Result of ft_strlcat: %zu\n", result1);

    // Strlcat

    size_t result2 = strlcat(dest2, "lorem ipsum dolor sit amet", 15);
    printf("Concatenated string: %s\n", dest2);
    printf("Result of strlcat: %zu\n", result2);

    return 0;
}