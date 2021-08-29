#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		if (i + 1 < size)
		{
			dest[i] = src[j];
		}
		i++;
		j++;
	}
	return (i);
}
/*
int main()
{
	char str1[20] = "_abc_def";
	char str2[10] = "_ghi_jkl_";
	char *tmp1, *tmp2;
	unsigned int result;

	printf("CASE |ft_strlcat(str1, str2, 20)|");
	result = ft_strlcat(str1, str2, 20);
	if (result < 20)
		printf("\n String was fully copied!");
	else
		printf("\n String truncated...");

	printf("\n\n");

	printf("CASE |ft_strlcat(str1, \"_123_456_789_\", 20)|");
	result = ft_strlcat(str1, "_123_456_789_", 20);
	if (result < 20)
		printf("\n String was fully copied!");
	else
		printf("\n String truncated...");

	return (0);
}
*/
