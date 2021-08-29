#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while ((*src != '\0') && (nb--))
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest);
}
/*
int main()
{
	char str1[20] = "abcde";
	char str2[20] = "12345";

	printf("_WHEN nb=3_");
	ft_strncat(str1, str2, 3);
	printf("\n%s\n", str1);

	printf("_WHEN src=\"_fghij\",nb=5_");
	ft_strncat(str1, "_fghij", 5);
	printf("\n%s\n", str1);
	return (0);
}
*/
