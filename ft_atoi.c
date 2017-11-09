/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:33:18 by llopez            #+#    #+#             */
/*   Updated: 2017/11/09 16:50:53 by llopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static size_t	ft_numblen(const char *str)
{
	int b;
	int count;

	b = 0;
	count = 0;
	while (str[b] == ' ' || (str[b] >= 9 && str[b] <= 13))
		b++;
	b = (str[b] == '-')?b + 1:b;
	while (ft_isdigit(str[b + 1]))
	{
		b++;
		count++;
	}
	count = (ft_isdigit(str[b]))?count + 1:count;
	return (count);
}

int				ft_atoi(char const *str)
{
	int i;
	int zero;
	int tmp;
	int result;
	int positive;

	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	positive = (str[i] == '-')?-1:1;
	i = (positive == -1)?i + 1:i;
	while (str[i + 1] && ft_isdigit(str[i + 1]))
	{
		zero = 0;
		tmp = ((int)str[i] - '0') * positive;
		while (zero++ < ((int)ft_numblen((char const *)str) - i - 1))
			tmp *= 10;
		result += tmp;
		i++;
	}
	result += (ft_isdigit(str[i]))?((int)str[i] - '0') * positive:0;
	return (result);
}
