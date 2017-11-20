
#include "libft.h"

char	*ft_realloc(char *src, size_t new_size)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	ft_strcpy(tmp, src);
	src = (char *)malloc(sizeof(char) * new_size);
	src[new_size - 1] = '\0';
	ft_strcpy(src, tmp);
	return (src);
}
