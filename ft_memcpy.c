/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:49:57 by edforte           #+#    #+#             */
/*   Updated: 2024/01/17 12:30:08 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = dst;
	s = src;
	while (n-- > 0)
	{
		*d = *s;
		d ++;
		s ++;
	}
	return (dst);
}

//int main()
//{
//    char source[] = "ciao io sono Edoardo";
//    char destination[20];
//
//    size_t length = ft_strlen(source) + 1;
//    ft_memcpy(destination, source, length);
//    printf("Source: %s\n", source);
//    printf("Destination: %s\n", destination);
//    return 0;
//}