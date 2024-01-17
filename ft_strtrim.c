/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 22:12:19 by edforte           #+#    #+#             */
/*   Updated: 2024/01/16 19:31:04 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*s2;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while(ft_strchr(set, (int)s1[i]) && s1[i])
	{
		start ++;
		i ++;
	}
	i = end;
	while(ft_strchr(set, (int)s1[i]) && i > start)
	{
		end --;
		i --;
	}
	s2 = (char *)malloc(((end - start) + 2) * sizeof(char));
	s2 = ft_substr(s1, start, (end - start) + 1);
	if (!s2)
		return (0);
	return (s2);
}


int main()
{
    // Example usage
    char const *s1 = "   Hello, World!   ";
    char const *set = " ";

    char *trimmed_str = ft_strtrim(s1, set);

    // Display the original and trimmed strings
    printf("Original string: \"%s\"\n", s1);
    printf("Trimmed string:  \"%s\"\n", trimmed_str);

    // Don't forget to free the allocated memory
    free(trimmed_str);

    return 0;
}

