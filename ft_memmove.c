/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:59:33 by edforte           #+#    #+#             */
/*   Updated: 2024/01/22 18:27:39 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
		ft_memcpy(dst, src, n);
	else
	{
		d = (d + n) - 1;
		s = (s + n) - 1;
		while (n > 0)
		{
			*d = *s;
			d --;
			s --;
			n --;
		}
	}
	return (dst);
}

//int main()
//{
// Test with overlapping memory regions
//    char buffer[20] = "Hello, World!";
//    ft_memmove(buffer + 3, buffer, 10);
//    printf("After memmove (overlapping memory regions):\n");
//    printf("Buffer: %s\n", buffer);
// Test with non-overlapping memory regions
//    char source[] = "How are you?";
//    char destination[20];
//    ft_memmove(destination, source, strlen(source) + 1);
//    printf("After memmove (non-overlapping memory regions):\n");
//    printf("Source: %s\n", source);
//    printf("Destination: %s\n", destination);
//    return 0;
//}
