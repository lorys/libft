/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:29:17 by llopez            #+#    #+#             */
/*   Updated: 2017/11/08 15:30:15 by llopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void		*ft_memset(void *s, int c, size_t n)
{
	unsigned char *r;

	r = (unsigned char *)s;
	if (n == 0)
		return (s);
	while (n > 0)
	{
		r++ = (unsigned char)c;
		n--;
	}
	return (s);
}
