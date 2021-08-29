#include<stdio.h>
#include<string.h>

//【参考サイト】https://www.codezclub.com/c-sort-elements-in-lexicographical-dictionary-order/

int	main(void)
{

	int	a, b;
	char	ary1[10][50], ary2[50];

	printf("\n 10個の文字を入力：：\n");

	for (a = 0; a < 10; ++a)
		scanf("%s\n", ary1[a]);

	for (a = 0; a < 9; ++a)
	{
		for (b = a + 1; b < 10; ++b)
		{
			if (strcmp(ary1[a], &ary2[b]) == 0)
			{
				strcpy(ary2, ary1[a]);
				strcpy(ary1[a], ary1[b]);
				strcpy(ary1[b], ary2);
			}
		}
	}

	printf("\n 辞書順の並びで表示：：\n");

	for (a = 0; a < 10; ++a)
		puts(ary1[a]);

	return (0);
}
