#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while ((n > i) && (s1[i] || s2[i]))
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int main()
{
	char str1[] = "aabbcc";
	char str2[10];

	printf("_INPUT_\n");
	scanf("%s", str2);

	printf("_RETURN_\n%d", ft_strncmp(str1, str2, 2));

	return (0);
}
*/
