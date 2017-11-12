void	ft_striter(char *s, void(*f)(char *))
{
	int s_len;

	s_len = ft_strlen(s);
	while (s_len)
		f(s[s_len--]);
}
