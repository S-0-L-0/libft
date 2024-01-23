/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:49:43 by edforte           #+#    #+#             */
/*   Updated: 2024/01/23 14:59:55 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, (char)s[i]);
		i ++;
	}
	str[i] = '\0';
	return (str);
}

//int main()
//{
//    char input_str[] = "Hello, World!";
//    char *result = ft_strmapi(input_str, &my_mapping_function);
//    printf("Original string: %s\n", input_str);
//    printf("Mapped string: %s\n", result);
//    free(result);
//    return 0;
//}
