/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:22:34 by edforte           #+#    #+#             */
/*   Updated: 2024/01/23 15:55:57 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*strres;
	unsigned int	end;
	int				i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len >= (ft_strlen(s)))
		len = (ft_strlen(s));
	end = start + len;
	strres = (char *) malloc((len + 1) * sizeof(char));
	if (!strres)
		return (NULL);
	i = 0;
	while (start < end)
	{
		strres[i] = s[start];
		start ++;
		i ++;
	}
	strres[i] = '\0';
	return (strres);
}

// int main(int ac, char **av)
// {
// 	if (ac)
// 	{
// 		printf("%s\n", av[1]);
// 		printf("%s", ft_substr(av[1], 24, 30));
// 	}
// 	// free (strres);
// 	return (0);
// }
