#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	offset;
	char	*str;

	offset = 0;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if ((size_t) start > ft_strlen(s))
		return (ft_strdup(""));
	while (s[start] && offset < len)
	{
		str[offset] = s[start];
		offset++;
		start++;
	}
	str[offset] = '\0';
	return (str);
}
