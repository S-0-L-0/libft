/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:07:18 by edforte           #+#    #+#             */
/*   Updated: 2024/01/23 14:14:46 by edforte          ###   ########.fr       */
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

// #include <string.h>
// int main()
// {
// 	char *dest1;
// 	char *dest2;
//	
// 	if (!(dest1 = (char *)malloc(sizeof(*dest1) * 15)))
// 		return (0);    
// 	if (!(dest2 = (char *)malloc(sizeof(*dest2) * 15)))
// 		return (0);
// 	memset(dest2, 0, 15);
// 	memset(dest2, 'r', 6);
//   	dest2[14] = 'a';
// 	memset(dest1, 0, 15);
// 	memset(dest1, 'r', 6);
//   	dest1[14] = 'a';

// 	// Ft_strlcat
//     size_t result1 = ft_strlcat(dest1, "lorem ipsum dolor sit amet", 15);
//     printf("Concatenated string: %s\n", dest1);
//     printf("Result of ft_strlcat: %zu\n", result1);

//     // Strlcat

//     size_t result2 = strlcat(dest2, "lorem ipsum dolor sit amet", 15);
//     printf("Concatenated string: %s\n", dest2);
//     printf("Result of strlcat: %zu\n", result2);

//     return 0;
// }