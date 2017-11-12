<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:11:03 by llopez            #+#    #+#             */
/*   Updated: 2017/11/12 19:03:08 by llopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

=======
>>>>>>> bdd0c2d7ef12ba81df0815af8dabc227c5e08368
char	*ft_strnew(size_t size)
{
	char	*str;

<<<<<<< HEAD
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
=======
	str = (char *)malloc(sizeof(char) * size + 1);
>>>>>>> bdd0c2d7ef12ba81df0815af8dabc227c5e08368
	size++;
	while (size--)
		str[size] = '\0';
	return (str);
}
