#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*p;

	p = dest;
	if (*src == '\0')
		return (NULL);
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (p);
}
/*
int	main(void)
{
	char	ary_origin[20] = "To_42_Kyo";
	char	ary_cpy[20];

	printf("[%s]\n", ary_origin);
	printf("%s\n", ft_strcpy(ary_cpy, ary_origin));
	return (0);
}
*/
