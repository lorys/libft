char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	size++;
	while (size--)
		str[size] = '\0';
	return (str);
}
