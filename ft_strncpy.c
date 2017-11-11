/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:24:20 by llopez            #+#    #+#             */
/*   Updated: 2017/11/11 18:41:24 by llopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = ft_strlen(src);
	if (i < len)
	{
		ft_strcpy(dst, src);
		ft_bzero(dst + i, len - i);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
