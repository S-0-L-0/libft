/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:41:01 by edforte           #+#    #+#             */
/*   Updated: 2024/01/15 18:59:36 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkword(char *str, int start, int end, char *substr)
{
	int	i;

	i = -1;
	while (start++ < end)
	{
		if (str[start] != substr[i])
			return (0);
		i ++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	char	*haytmp;
	char	*neetmp;

	i = 0;
	haytmp = (char *) haystack;
	neetmp = (char *) needle;
	if (*neetmp == '\0')
		return (haytmp);
	while (len -- > 0 || haytmp[i])
	{
		if (haytmp[i] == neetmp[0])
		{
			if (ft_checkword(haytmp, i, (i + ft_strlen(neetmp)), neetmp) == 1)
				return (&(haytmp[i]));
		}
		i ++;
	}
	return (0);
}

//int main() {
//    const char* haystack = "ciao io sono Edoardo";
//    const char* needle = "sono";
//    char* result = ft_strnstr(haystack, needle, 25);
//    if (result != 0) {
//        printf("Needle found at position: %ld\n", result - haystack);
//    } else {
//        printf("Needle not found in haystack.\n");
//    }
//    return 0;
//}
