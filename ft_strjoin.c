/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:19:16 by edforte           #+#    #+#             */
/*   Updated: 2024/01/15 19:20:05 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strres;
	int		i;
	int		j;
	int		len_max;

	i = 0;
	j = 0;
	len_max = ((ft_len(s1) + ft_len(s2)) + 1);
	strres = (char *) malloc(len_max * sizeof(char));
	if (strres == 0)
		return (NULL);
	while (s1[i])
	{
		strres[i] = s1[i];
		i ++;
	}
	while (s2[j])
	{
		strres[i] = s2[j];
		i ++;
		j ++;
	}
	strres[i] = '\0';
	return (strres);
}

//int main(int ac, char **av)
//{
//	if (ac)
//	{
//		printf("%s\n", av[1]);
//		printf("%s\n", av[2]);
//		printf("%s\n", ft_strjoin(av[1], av[2]));
//	}
//	free (strres);
//	return (0);
//}
