#include<stdio.h>
#include<string.h>

int	main(void)
{
	int	len, i;
	char	str1[256], str2[] = "DRAGON";

	scanf("%s", str1);
	len = strlen(str2);

	for (i = 0; i < len + 1; i++)
	{
		if (str1[i] != str2[i])
			break;
		if (i == len + 1)
			printf("同じ\n");
		else
			printf("違う\n");
	}
	return (0);
}
