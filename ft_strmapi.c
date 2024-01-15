/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:49:43 by edforte           #+#    #+#             */
/*   Updated: 2024/01/15 20:07:13 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(ft_strlen(s) * sizeof(char));
	while(s[i])
	{
		str[i] = f(i, (char)s[i]);
		i ++;
	}
	return (str);
}

//#include <stdio.h>
//#include <stdlib.h>
//
// Assuming you have the ft_strmapi declaration in your code
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//
// A sample mapping function
//char my_mapping_function(unsigned int index, char character) {
//	(void)index;
    // Add 1 to the ASCII value of each character
//    return character + 1;
//}
//
//int main() {
//    // Sample input string
//    char input_str[] = "Hello, World!";
//
//    // Test ft_strmapi function
//    char *result = ft_strmapi(input_str, &my_mapping_function);
//
    // Print the result
//    printf("Original string: %s\n", input_str);
//    printf("Mapped string: %s\n", result);
//
    // Free the allocated memory
//    free(result);
//
//    return 0;
//}
