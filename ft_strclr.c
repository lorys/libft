void	ft_strclr(char *str)
{
	int str_len;

	str_len = ft_strlen(str) + 1;
	while (str_len--)
		str[str_len] = '\0';
}
