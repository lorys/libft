/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:52:03 by llopez            #+#    #+#             */
/*   Updated: 2017/11/08 16:08:00 by llopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
		return (1);
	return (0);
}

int		main(void)
{
	int c;

	c = 32;
	while (c <= 126)
	{
		if (ft_isprint(c) != isprint(c))
			printf("probleme pour le caractere %c (%d).\n", c, c);
		else
			printf("%c (%d) ok. \n", c, c);
		c++;
	}
	return (0);
}
