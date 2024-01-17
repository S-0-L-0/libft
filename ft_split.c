/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:20:20 by edforte           #+#    #+#             */
/*   Updated: 2024/01/17 11:51:14 by edforte          ###   ########.fr       */
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

//int main() 
//{
//   char input_str[] = "This is a sample string to split";
//   char delimiter = ' ';
//   char **result = ft_split(input_str, delimiter);
//   printf("Result:\n");
//   int i = 0;
//   while (result[i] != NULL) 
//	{
//        printf("%s\n", result[i]);
//        free(result[i]);
//        i++;
//	}
//    free(result);
//    return 0;
//}
