#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main()
{
	char	*str1 = "42tokyo";
	char	str2[10];
	int	dif;

	printf("_INPUT STRING2 _\n");
	scanf("%s", str2);

	dif = ft_strcmp(str1, str2);
	printf("_RETURN_\n%d", dif);
	return (0);
}
*/
