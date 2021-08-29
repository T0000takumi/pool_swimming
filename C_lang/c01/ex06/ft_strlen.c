#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
	{
		++count;
	}
	return (count);
}
/*
int	main(void)
{
	char	arry[10];

	scanf("%s", arry);
	printf("The number of array is %d\n", ft_strlen(arry));
	return (0);
}
*/
