#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*p;

	if (dest == '\0')
		return (NULL);
	p = dest;
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
/*
int main()
{
	char *ary_src = "TOKYo";
	char ary_dest[20];

	printf("SOURCE: [%s]\n", ary_src);

	printf("%s\n", ft_strncpy(ary_dest, ary_src, 4));
	return (0);
}
*/
