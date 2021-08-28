#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
/*
int main()
{
	char str1[10] = "42";
	char str2[10] = "Tokyo";

	ft_strcat(str1, str2);
	printf("%s\n", str1);
	return (0);
}
*/
