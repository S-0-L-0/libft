/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:11:28 by edforte           #+#    #+#             */
/*   Updated: 2024/01/17 13:33:29 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1 ++;
		str2 ++;
		n --;
	}
	return (0);
}

//#include <string.h>
//int main()
//{
    // Test with equal strings
//    char str1[] = "Hello, World!";
//    char str2[] = "Hello, World!";
//    int result = ft_memcmp(str1, str2, sizeof(str1));
//    printf("Comparison result (equal strings): %d\n", result);
//
    // Test with different strings
//    char str3[] = "Hello, Universe!";
//    result = ft_memcmp(str1, str3, sizeof(str1));
//    printf("Comparison result (different strings): %d\n", result);
//
    // Test with partial comparison
//    char partialStr1[] = "Hello";
//    char partialStr2[] = "Hellz";
//
//    result = ft_memcmp(partialStr1, partialStr2, sizeof(partialStr1));
//    printf("Partial comparison result: %d\n", result);
//    return 0;
//}
