/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:19:29 by edforte           #+#    #+#             */
/*   Updated: 2024/01/23 14:54:43 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digits_counter(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i ++;
	while (n != 0)
	{
		n /= 10;
		i ++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	num;

	num = n;
	i = digits_counter(num);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (num == 0)
		str[i] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		str[i] = (num % 10) + 48;
		num = num / 10;
		i --;
	}
	return (str);
}

// int main()
// {
//    int number = -12345;
//    char *result_str = ft_itoa(number);
//    printf("Integer: %d\n", number);
//    printf("Converted string: %s\n", result_str);
//    free(result_str);
//    return (0);
// }
