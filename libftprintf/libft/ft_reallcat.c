
#include "libft.h"

char	*ft_reallcat(char *s1, char *s2)
{
	s1 = ft_realloc(s1, ft_strlen(s1) + ft_strlen(s2));
	s1 = ft_strcat(s1, s2);
	return (s1);
}
