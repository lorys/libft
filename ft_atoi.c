/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:33:18 by llopez            #+#    #+#             */
/*   Updated: 2017/11/08 19:32:18 by llopez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char const *str);

int		ft_atoi(char const *str)
{
	int positif;
	int i;
	int zero;
	int tmp;
	int result;

	zero = 0;
	i = 0;
	result = 0;
	if (str[0] == '-')
	{
		positif = 1;
		i = 1;
	}
	while (str[i + 1])
	{
		tmp = (int)str[i] - '0';
		while (zero++ < (ft_strlen(str) - i))
			tmp *= 10;
		zero = 0;
		result += tmp;
		i++;
	}
	result += (int)str[i] - '0';
	return (result);
}

int		main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	return (0);
}
