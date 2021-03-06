/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjacki <sjacki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:39:29 by sjacki            #+#    #+#             */
/*   Updated: 2021/01/17 15:53:08 by sjacki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

size_t		ft_strlen(const char *s)
{
	size_t		x;

	if (!s)
		return (0);
	x = 0;
	while (s[x])
		x++;
	return (x);
}
