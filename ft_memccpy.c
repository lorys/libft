/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 07:36:22 by llopez            #+#    #+#             */
/*   Updated: 2017/11/11 12:12:48 by llopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dest, void *src, int c, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*a == (unsigned char)c)
		{
			*b = *a;
			b++;
			return (b);
		}
		*b = *a;
		n--;
		b++;
		a++;
	}
	return (0);
}
