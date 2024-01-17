/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:47:45 by edforte           #+#    #+#             */
/*   Updated: 2024/01/17 16:35:36 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s2;

	s2 = (char *) s;
	i = 0;
	while (s2[i])
		i ++;
	if (c == 0)
		return (&s2[i]);
	while (i >= 0)
	{
		while (s2[i] == (char) c)
			return (&s2[i]);
		i --;
	}
	return (NULL);
}

// int main()
// {
//     const char *str1 = "bonjour";
//     const char *result1 = ft_strrchr(str1, 's');

//     if (result1 != NULL)
//         printf("Last occurrence of '%c' in \"%s\": %s\n", 's', str1, result1);
//     else
//         printf("'%c' not found in \"%s\"\n", 's', str1);
//     return (0);
// }
