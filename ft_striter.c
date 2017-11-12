<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:11:40 by llopez            #+#    #+#             */
/*   Updated: 2017/11/12 19:02:12 by llopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
=======
void	ft_striter(char *s, void(*f)(char *))
>>>>>>> bdd0c2d7ef12ba81df0815af8dabc227c5e08368
{
	int s_len;

	s_len = ft_strlen(s);
<<<<<<< HEAD
	while (s_len--)
		f(s + s_len);
=======
	while (s_len)
		f(s[s_len--]);
>>>>>>> bdd0c2d7ef12ba81df0815af8dabc227c5e08368
}
