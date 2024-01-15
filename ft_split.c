/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:20:20 by edforte           #+#    #+#             */
/*   Updated: 2024/01/15 19:26:42 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_mkword(char const *str, int start, int end)
{
	int		i;
	char	*substr;

	i = 0;
	substr = (char *)malloc(((end - start) + 2) * sizeof(char));
	while (start <= end)
	{
		substr[i] = str[start];
		i ++;
		start ++;
	}
	substr[i] = '\0';
	return (substr);
}

int	wds_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1])
			count ++;
		i ++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		end;
	char	**words;
	int		count;

	i = -1;
	start = 0;
	words = (char **)malloc(1 + wds_count(s, c) * sizeof(char *));
	count = 0;
	while (s[++i])
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			end = i - 1;
			if (s [i + 1] == '\0')
				end = i;
			words[count] = ft_mkword(s, start, end);
			count ++;
			if (s[i + 1])
				start = i + 1;
		}
	}
	words[count] = NULL;
	return (words);
}

//int main() {
//    // Example string
//   char input_str[] = "This is a sample string to split";
//
//    // Character to split on
//    char delimiter = ' ';
//
//    // Test ft_split function
//    char **result = ft_split(input_str, delimiter);
//
//    // Print the result
//    printf("Result:\n");
//
//    // Print using while loop
//    int i = 0;
//    while (result[i] != NULL) {
//        printf("%s\n", result[i]);
//        free(result[i]);  // Free each word
//        i++;
//    }
//
//    free(result);  // Free the array of words
//
//    return 0;
//}
