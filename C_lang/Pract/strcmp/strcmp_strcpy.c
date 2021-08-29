#include<stdio.h>
#include<string.h>

int	N, K, i;
char	ary[10];

int	func_cmp(void *x, void *y)
{
	char	xx = *((char *)x);
	char	yy = *((char *)y);
	return (strcmp(&xx, &yy));
}

void	func_a(void)
{
	for (i = 0; i <= N; i++)
		scanf("%c", &ary[i]);
}

void	func_b(void)
{
	qsort(ary, N, sizeof(char), func_cmp);
	printf("（3）入力されたアルファベットを辞書順に並び替え：\n");
	for(i = 0; i <= N; i++)
		printf("%c\n", ary[i]);
}

void	func_c(void)
{
	scanf("%d", &K);
	printf("（5）指定したインデックス番号%dの文字：\n%c", K, ary[K]);
}

int	main()
{
	printf("（1）【インデックス総数N】を入力：");
	scanf("%d", &N);

	printf("（2）【%d個】の各インデックスに格納される【%d個の半角英数文字】を入力：\n", N, N-1);
	func_a();
	func_b();

	printf("\n（4）抽出する文字列のインデックス番号【K】を指定：\n");
	func_c();

	return (0);
}
