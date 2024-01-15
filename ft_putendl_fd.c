/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edforte <edforte@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:29:08 by edforte           #+#    #+#             */
/*   Updated: 2024/01/15 20:34:36 by edforte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
		if (!s)
		return;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s ++;
	}
	write(fd, "\n", 1);
}