/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:10:05 by llopez            #+#    #+#             */
/*   Updated: 2017/11/08 15:21:04 by llopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void		*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char	*d;
	unsigned char 	*s;
	int			 	i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n >= 1)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}

int		main(void)
{
	char *dest;
	dest = (char *)malloc(sizeof(char) * 3);
	char src[] = "okaskjdkjshdy";
	size_t n = 5;

	printf("%s", ft_memmove(dest, src, n));
	return (0);
}
