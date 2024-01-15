/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 11:26:35 by edforte           #+#    #+#             */
/*   Updated: 2024/01/12 11:26:47 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i ++;
	if (str[i] == '-')
	{
		sign = sign * (-1);
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i ++;
	}
	printf ("%d\n", res);
	printf ("%d\n", sign);
	return (res * sign);
}

//int main() {
//    char str_num[] = "  25678"; // A string representing an integer
//
//    // Using atoi to convert the string to an integer
//    int converted_num = ft_atoi(str_num);
//
//    // Printing the result
//    printf("Original string: %s\n", str_num);
//    printf("Converted integer: %d\n", converted_num);
//
//   return 0;
//}
