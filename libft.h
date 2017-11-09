/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:35:04 by llopez            #+#    #+#             */
/*   Updated: 2017/11/09 12:50:20 by llopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(char const *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memccpy(void *dest, void *src, int c, size_t n);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(char const *str);

#endif