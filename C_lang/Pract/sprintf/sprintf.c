#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int	main(void)
{
	int	i = 5;
	char	str1[] = "Take_Back_";
	char	str2[] = "Yours_";
	char	moji[100];

	sprintf(moji, "%s %s %d", str1, str2, i);
	printf("\n%s\n", moji);

	return (0);
}
