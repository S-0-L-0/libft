/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:41:01 by edforte           #+#    #+#             */
/*   Updated: 2024/01/17 20:05:24 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_checkword(char *str, int start, int end, char *substr)
// {
//  	int	i;

//  	i = 0;
	
//  	while (start < end)
//  	{
//  		printf("%d\n", start);
//  		printf("%d\n", end);
//  		printf("%c - %c\n", str[start], substr[i]);

//  		if (str[start] != substr[i])
//  			return (0);
//  		start ++;
//  		i ++;
//  	}
//  	printf("%s\n", str);
//  	return (1);
// }

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
			if (ft_strncmp(&haystack_tmp[i], needle_tmp, ft_strlen(needle_tmp)) == 0)
				return (&(haystack_tmp[i]));
		}
		i ++;
	}
	return (0);
}

 #include <stdio.h>
 #include <string.h>

// int main()
// {
//     // Test with a string and a substring
//     const char *haystack = "lorem ipsum dolor sit amet";
//     const char *needle = "ipsum";

//     // Using strnstr to find the substring
//     char *result = ft_strnstr(haystack, needle, 15);

//     if (result != NULL)
//         printf("Substring \"%s\" found at position %ld\n", needle, result - haystack);
//     else
//         printf("Substring \"%s\" not found in \"%s\"\n", needle, haystack);

//     return 0;
// }